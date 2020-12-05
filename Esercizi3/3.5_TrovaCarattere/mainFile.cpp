#include <iostream>
#include <string>
#include <fstream>
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


//funzione che data una astruttura, una char ed un int, aumenta la dimensione della struttura passata.
int appendStruct(occorrenze &struttura, char lettera, int ripetizioni ){
    int flag =0;
    if(struttura.dim!=dimMax){
        struttura.dim++;
        //cout<<"dimensione della struttura-->"<<struttura.dim<<endl;
        contatore p = {lettera, ripetizioni};
        struttura.cont[struttura.dim]=new contatore;
        *(struttura.cont[struttura.dim])=p;
        //cout<<"inserisco e conto nuovo carattere"<<endl;
    }else{
        cout<<"ERRORE: tentativo di contare num. elementi maggiore di quanto sia consetito"<<endl;
        flag=1;
    }
    return flag;
}



/*
il programma riceve il nome del file da linea di comando.
*/
int main(int argc,  char const *argv[])
{
    //dichiarazione della variabile per gestire il valore di return della funzione
    int flag = 0;
    //gestione della possibilità che non vengano inseriti parametri.
    if(argc==1){
        cout<<"ERRORE: parametri inseriti in modo non corretto"<<endl;
        flag=1;
    }else{
        //esecuzione regolare del programma 
        
        //apertura del file
        fstream file;
        file.open(argv[1], ios::in);
        //cout<<"nome del file da aprire-->"<<argv[1]<<endl;
        //gestione errori in apertura del file;
        if(file.fail()){
            cerr<<"ERRORE: errore nella lettura file, (file non esiste?)"<<endl;
        }else{
            occorrenze x;
            char carattere;
            //per ogni elemento della stringa (escluso il terminatore)
            file>>carattere;
            //cout<<"carattere da contare-->"<<carattere<<endl;
            
            while( !file.fail()){
                //controllo se è una lettera o un numero
                if(isalpha(carattere) || isdigit(carattere)){
                    //variabili di controllo del ciclo di ricerca
                    int a=1;
                    bool trovato=false;
                    //ciclo di controllo, itera finché non si trova il carattere nel contatore
                    //nel caso non lo si trovi, la var trovato resta = a false;
                    while(a<=x.dim){
                        //per debug: 
                        //cout<<"pos in struct confr. con carattere-->"<<a<<endl;
                        if(x.cont[a]->lettera==carattere){
                            x.cont[a]->ripetizioni++;
                            trovato=true;
                            //cout<<"lettera trovata e contata"<<endl;
                        }
                        a++;
                    }
                    //se trovato = false aggiungo un nuovo elemento alla struttura per 
                    //contare le occorrenze del carattere in posizione i-esima e contiamo già la sua comparsa
                    if(trovato==false){
                        //cout<<"lettera non trovata"<<endl;
                        appendStruct(x,carattere, 1);
                    }
                    file>>carattere;
                    //cout<<"nuova lettera da cercare-->"<<carattere<<endl;
                }else{
                    file>>carattere;
                    //cout<<"char prec no alfa o num, nuova lettera da cercare-->"<<carattere<<endl;
                }
            }
            cout<<"chiudo il file"<<endl;
                file.close();
            //stampo il risultato
            cout<<"lunghezza finale della struct-->"<<x.dim<<endl;
            for(int a=1; a<=x.dim;a++){
                cout<<x.cont[a]->lettera<<"----->"<<x.cont[a]->ripetizioni<<endl;
            }
        }
    }
    //cout<<"fine del programma"<<endl;
    return 0;
}
