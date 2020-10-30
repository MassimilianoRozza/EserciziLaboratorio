/*
Una parola, frase o numero palindromo ha la proprietà che può 
essere letto in entrambi i sensi.
Per esempio i seguenti numeri da 5 cifre sono palindromi:
12321, 55555, 85658, 11611.
SUP che legge un numero a 5 cifre e determina se questo è 
palindromo o meno.
*/
#include "cifraInPosizione.hpp"
#include <iostream>
using namespace std;

//MAIN ======================================================================
int main()
{
    //RICHIESTA DATI ALL'UTENTE =============================================
    int numero;
    cout<<"inserisci un numero con meno di 11 cifre"<<endl;
    cin>>numero;
    
    /*
    if(lungString!=5){
        
        //RICHIESTA INPUT FINCHÉ NON È CORRETTO =============================
        while(lungString!=5){
            cout<<"ERRORE: il numero inserito non ha 5 cifre"<<endl<<endl;
            cout<<"inserisci un numero di 5 cifre";
            cin>>numero;
            lungString=to_string(numero).length();
        }
        
    }
    */
    //CHIAMATA FUNZIONE PER CONTROLLO SE PALINDROMO =========================
    if(palindromo(numero==2)){
        cout<<"il numero è troppo grande per eseguire il controllo"
        <<endl;
    }else{
        if(bool(palindromo(numero))){
            cout<<numero<<" è palindromo"<<endl;
        }else{
            cout<<numero<<" non è palindromo"<<endl;
        }
    }
}

