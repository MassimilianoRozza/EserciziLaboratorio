#include <iostream>
#include <random>
#include <ctime>

using namespace std;
//definizione del numeo massimo di facce che il dado può avere
const int MaxFace=10000;

//definizione della struct che contiene valori assunti dalla somma
//dei tiri dei dadi e numero di volte che tale somma è uscita;
struct numero{
    char num;
    int cont;
};

struct cont{
    int dim;
    numero times[MaxFace];
};

//funzione che calcola la somma dei valori usciti dal lancio di due dadi
int tira(int tries, int faces){
    int sum;
    for(tries; tries>0; tries--){
        srand(time(NULL));
        sum=(rand()%faces)+(rand()%faces);
        cout<<"somma del tiro"<<sum<<endl;
    }
    return sum;
}

//funz. che aumenta la dim della struttura
int appendStruct(cont &struttura, char valore, int ripetizioni ){
    int flag =1;
    if(struttura.dim!=MaxFace){
        struttura.dim++;
        numero p = {valore, ripetizioni};
        struttura.times[struttura.dim]=new numero;
        *(struttura.times[struttura.dim])=p;
    }else{
        cout<<"ERRORE: tentativo di contare num. elementi maggiore di quanto sia consetito"<<endl;
        flag=1;
    }
    return flag;
}

//funz. che inserisce somma dei tiri in struct
int inserisciSum(cont &struttura, int sum);

//inserire numero di tentativi,
//ed eventualmente il numero di facce del dado (default = 6, max=10000);
int main(int argc, char const *argv[])
{
    cont struttura;
    //in base al numero dei parametri passari il comportamento della funzione cambia
    switch (argc)
    {
    case 1: //errore, solo nome del programma
        cout<<"ERRORE:nessun parametro inserito"<<endl;
        break;
    case 2: //nome del programma + numero di tentativi da cmd, facce dei dadi = default
        cout<<"tipo di dado non specificato, presunto dadoa 6 facce"<<endl;
        inserisciSum(struttura, tira(atoi(argv[1]), 6));

        break;
    case 3: //nome progr. + num tentativi +num facce dei dadi.
        /*finire*/
        break;
    }
    return 0;
}

int inserisciSum(cont &struttura, int sum){
    //variabili di controllo del ciclo di controllo
    int a=0;
    bool trovato=false;
    //ciclo di controllo, itera finché non si trova il carattere nel contatore
    //nel caso non lo si trovi, la var trovato resta = a false;
    while(a<=struttura.dim){
        if(struttura->times[struttura.dim]->num==char(sum)){
            struttura->times[a]->cont++;
            trovato=true;
        }
        a++;
    }
    //se trovato = false aggiungo un nuovo elemento alla struttura per 
    //contare le occorrenze del carattere in posizione i-esima e contiamo già la sua comparsa
    if(trovato==false){
        appendStruct(struttura,sum, 1);
    }
}
