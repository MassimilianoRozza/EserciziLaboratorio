/*
SUP che dato un numero intero e un numero indice, individua la cifra alla posizione indice del primo numero inserito.
Esempio: 39842, indice 2 (decine) = 4 decine.
Farsi stampare solo la cifra, non serve il nome posizionale (decine, centinaia, ecc).
Info: Per scomporre il numero in cifre, usare l'operatore divisione e resto con le potenzedi 10.
Questa è un'operazione che capita spesso in programmazione.
Svolgere prima l'esercizio precedente: si può riutilizzare del codice.
*/
#include<iostream>
using namespace std;

char cifraInPosizione(int numero, int posizione);

int main(){
    int numero, posizione;
    cout<<"inserire una numero:"<<endl;
    cin>>numero;
    cout<<"inserire posizione della cifra che si cerca"<<endl;
    cin >>posizione;
    
    cout<<"cifra in posizione "<<posizione<<" = "<<cifraInPosizione(numero, posizione)<<endl;
}

char cifraInPosizione(int numero, int posizione){
    string num=to_string(numero);
    int lung = num.length();
    
    return num[lung-posizione];
}