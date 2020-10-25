/*
Una parola, frase o numero palindromo ha la proprietà che può 
essere letto in entrambi i sensi.
Per esempio i seguenti numeri da 5 cifre sono palindromi:
12321, 55555, 85658, 11611.
SUP che legge un numero a 5 cifre e determina se questo è 
palindromo o meno.
*/
#include "1.2_ScomposizionePosizionale.h"
#include <iostream>
using namespace std;

bool palindromo(int numero);
//MAIN ======================================================================
int main(int argc, char const *argv[])
{
    //RICHIESTA DATI ALL'UTENTE =============================================
    int numero;
    cout<<"inserisci un numero di 5 cifre"<<endl;
    cin>>numero;
    //CONTROLLO SE INSERIMENTO RISPETTA LE SPECIFICHE RISCHIESTE ============
    int b=to_string(numero).length();
    if(b!=5){
        //RICHIESTA INPUT FINCHÉ NON È CORRETTO =============================
        while(b!=5){
            cout<<"ERRORE: il numero inserito non ha 5 cifre"<<endl<<endl;
            cout<<"inserisci un numero di 5 cifre";
            cin>>numero;
            b=to_string(numero).length();
        }
    }
    //CHIAMATA FUNZIONE PER CONTROLLO SE PALINDROMO =========================
    if(palindromo(numero)){
        cout<<numero<<" è palindromo"<<endl;
    }else{
        cout<<numero<<" non è palindromo"<<endl;
    }
}

//FUNZIONE CONTROLLO SE PALINDROMO ==========================================
bool palindromo(int numero){
    bool flag=false;
    for(int a=0; a<3;a++){
        if(cifraInPosizione(numero, a)==cifraInPosizione(numero,5-a) )flag=true;
        else flag=false;
    }
    return flag;
}