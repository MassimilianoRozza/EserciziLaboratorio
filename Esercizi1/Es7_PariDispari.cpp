/*
Scrivere un programma che prende un intero e verifica se questo è pari o dispari e scrive qualcosa a proposito.
*/
using namespace std;
#include <iostream>
int main(int argc, char const *argv[])
{
    int numero;
    cout<<"inserire un numero per verificare se sia pari, inserire  0 per uscire"<<endl;
    cin>>numero;
    cout<<endl<<endl;
    while (numero !=0)
    {
        if(numero%2==0){
            cout<<" pari"<<endl;
        }else{
            cout<<" dispari"<<endl;
        }
        cout<<"inserire il numero da verificare"<<endl;
        cin>>numero;
    }
    cout<<"fine del programma";
    return 0;
}
