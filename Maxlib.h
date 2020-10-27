#include<iostream>

using namespace std;

/*
trovare la cifr nella posizione i-esima di un numero
intero,
passando come paramtri la poizione della quale sivule
sapere il valore ed il numero dal quale estrarlo.
*/
char cifraInPosizione(int numero, int posizione){
    string num=to_string(numero);
    int lung = num.length();
    
    return num[lung-posizione-1];
}

/*
controllo se un numero intero,
con meno di 11 cifre e positivo,
è palindromo.
Passando alla funzione come parametro il numero in 
questione.
La funzione esegue inoltre il controllo sulla lunghezza 
del numero e sul suo segno.
+ OUTPUT:
    + 2 se il numero non è elaborabile;
    + 1 se il numero è palindromo;
    + 0 se NON lo è.
*/
int palindromo(int numero){
    int flag=0;
    //CONTROLLO LA LUNGHEZZA DEL NUMERO PER EVITARE ERRORI CON LA DIMENSIONE 
    //  DELLE VARIABULI INT
    int lungString=to_string(numero).length();
    if(lungString>=11 && numero<0){
        cerr<<"numero troppo lungo per poter operare il controllo"<<endl;
        flag=2;
    }else{
        for(int a=0; a<lungString/2 && flag==1;a++){
            char b=cifraInPosizione(numero, a);
            char c=cifraInPosizione(numero,lungString-1-a);
            cout<<"cifra in posizine "<<a+1<<" = "<<b<<"\t"<<"cifra in posizione "<<4-a+1<<" = "<<c<<endl;
            if(b==c){
                flag=1;
            }else{
                flag=0;
            } 
        }
    }
    return flag;
}

/*
Restituisce l'elevamento a potenza del primo parametro
elevato per il secondo.
Funziona solo per parametri interi e positivi.
*/
int powInt(int base, int esponente){
    int risultato;
    if(esponente>0){
        int potenza=1;
        while(esponente!=0){
            potenza*=base;
            esponente--;
        }
        risultato=potenza;
    }else if(esponente==0){
        risultato=1;
    }
    return risultato;
}

int fattoriale(int numero){
    int fattoriale=1;
    while(numero>0){
        fattoriale=fattoriale*numero;
        numero--;
    }
    return fattoriale;
}

int fattorialeRicorsivo(int & ripetizioni, int & fattoriale){
    if(ripetizioni>0){
        fattoriale=fattoriale*ripetizioni;
        ripetizioni--;
        fattorialeRicorsivo(ripetizioni, fattoriale);
    }
    return fattoriale;
}