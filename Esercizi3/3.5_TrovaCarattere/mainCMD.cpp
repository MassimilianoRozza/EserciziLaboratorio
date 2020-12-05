#include <iostream>
#include <string>

using namespace std;

/*
SUP che data una stringa in input calcola le occorrenze di ogni carattere.
Risolvere il problema usando un unico array per contare le occorrenze.
Stampare il risultato in tabella, con possibili interessanti statistiche a vostra discrezione.
Considerare solo lettere dell'alfabeto, maiuscole e minuscole fanno parte dello stesso conteggio.
Scartare tutto ciò che non è una lettera, per semplicità si scartano anche i caratteri della tabella ASCII estesa
come le lettere accentate. 
Info: Tenere a mente come sono rappresentate le lettere nella tabella ASCII.
È possibile indicizzare l'array dove incrementiamo mano a mano il conteggio usando direttamente la lettera sotto esame e applicando un ofset.
Ad esempio la lettera D, quarta nell'alfabeto qui avente indice 3, ha valore ASCII 44, oppure anche 64 nel nostro caso.
Sottraendo un ofset di 41 o di 61 rispettivamente, troviamo il nostro indice di valore 3.

Estensione avanzata:
Invece che prendere in input una stringa dell'utente, prendere in input il nome di un file di testo plain-text,
in altre parole un file.txt. È possibile trovare online interi testi in formato .txt, come ad esempio I Promessi Sposi,
oppure anche La Divina Commedia.
La manipolazione di file in C++ usa lo stesso paradigma di uso della console. Trovate qui quello che vi serve specificatamente 
per risolvere questo esercizio, in particolare basatevi sull'esempio.
*/

//numero massimo di elementi da contare: 26 lettere min., 26 lettere maiusc. e 10 cifre; 
const int dimMax=26+26+10; 
//dichiarazione struttura per contenere i dati necessari
struct contatore{
    char lettera;
    int ripetizioni;
};
struct occorrenze{
    int dim=0; 
    contatore *cont[dimMax];
};

//funzione che data una struttura, una char ed un int, aumenta la dimensione della struttura passata.
int appendStruct(occorrenze &struttura, char lettera, int ripetizioni ){
    int flag =1;
    if(struttura.dim!=dimMax){
        struttura.dim++;
        contatore p = {lettera, ripetizioni};
        struttura.cont[struttura.dim]=new contatore;
        *(struttura.cont[struttura.dim])=p;
    }else{
        cout<<"ERRORE: tentativo di contare num. elementi maggiore di quanto sia consetito"<<endl;
        flag=1;
    }
    return flag;
}

//il programma riceve la stringa da linea di comando.
int main(int argc, char const *argv[])
{   
    //dichiarazione della variabile per gestire il valore di return della funzione
    int flag = 0;
    //gestione della possibilità che non vengano inseriti parametri.
    if(argc==1){
        cout<<"stringa non inserita"<<endl;
        flag=1;
    }else{
        //esecuzione regolare del programma 
        
        //creazione alias per accedere al parametro inserito
        const char *stringa=argv[1];
        occorrenze x;
        //per ogni elemento della stringa (escluso il terminatore)
        for(int i=0; stringa[i]!='\0';i++){
            //controllo se è una lettera o un numero
            if(isalpha(stringa[i]) || isdigit(stringa[i])){
                //per comodità lo copio in una variabile
                char carattere = stringa[i];
                //variabili di controllo del ciclo di controllo
                int a=0;
                bool trovato=false;
                //ciclo di controllo, itera finché non si trova il carattere nel contatore
                //nel caso non lo si trovi, la var trovato resta = a false;
                while(a<=x.dim){
                    if(x.cont[a]->lettera==carattere){
                        x.cont[a]->ripetizioni++;
                        trovato=true;
                    }
                    a++;
                }
                //se trovato = false aggiungo un nuovo elemento alla struttura per 
                //contare le occorrenze del carattere in posizione i-esima e contiamo già la sua comparsa
                if(trovato==false){
                    appendStruct(x,carattere, 1);
                }
            }
        }
        //stampo il risultato
        for(int a=1; a<=x.dim;a++){
            cout<<x.cont[a]->lettera<<"----->"<<x.cont[a]->ripetizioni<<endl;
        }
    }
    return 0;
}

