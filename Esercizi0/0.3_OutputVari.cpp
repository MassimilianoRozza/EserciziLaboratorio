/*
Scrivere un programma che scrive i numeri da 1 a 4 sulla stessa linea. Ripetere tre volte lo stesso output
utilizzando i seguenti metodi.
    1. Usando una sola volta cout e separando gli spazi dai numeri Es: "3" e " ".
    2. Usando una sola volta cout mantenendo gli spazi insieme ai numeri Es: "3 ".
    3. Usando quattro cout separati.
ESTENSIONE: L'utente inserisce un numero e vengono stampati i numeri da 1 al numero inserito.
Provate a capire quale tra le prime due opzioni è più eciente.
!
*/
using namespace std;
#include <iostream>
int main(){
    cout<<"inserire quanti numeri si desidera stampare";
    int quanti;
    cin>>quanti;
    //1.
    for(int i=1;i<=quanti; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    //2.
    for(int i = quanti;i>0;i--){
        printf("%i ", quanti+1-i);
    }
    cout<<endl;
    //3.
    if(quanti==4){
        cout<<"1 ";
        cout<<"2 ";
        cout<<"3 ";
        cout<<"4 ";
    }
    
}