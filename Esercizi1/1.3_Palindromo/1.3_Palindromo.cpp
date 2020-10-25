/*
Una parola, frase o numero palindromo ha la proprietà che può 
essere letto in entrambi i sensi.
Per esempio i seguenti numeri da 5 cifre sono palindromi:
12321, 55555, 85658, 11611.
SUP che legge un numero a 5 cifre e determina se questo è 
palindromo o meno.
*/
#include "cifraInPosizione.h"
#include <iostream>
using namespace std;

int palindromo(int numero);
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

//FUNZIONE CONTROLLO SE PALINDROMO ==========================================
int palindromo(int numero){
    int flag=0;
    //CONTROLLO LA LUNGHEZZA DEL NUMERO PER EVITARE ERRORI CON LA DIMENSIONE 
    //  DELLE VARIABULI INT
    int lungString=to_string(numero).length();
    if(lungString>=11){
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