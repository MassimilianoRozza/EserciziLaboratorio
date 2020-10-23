/*
Scrivere un programma che prende due numeri interi e determina se il primo è un multiplo del secondo.
*/
using namespace std;
#include<iostream>
int main(int argc, char const *argv[])
{
    int a, b;
    cout<<"inserire due numeri"<<endl;
    cin>>a>>b;
    // Controllo se il primo numero sia minore del secondo
    if(b>a){
        cout<<"il primo numero "<<char(138)<<" minore del secondo, di conseguenza non possono essere multipli.\nPremere 1 se si vuole invertire i due numeri per verificare se il secondo sia multiplo del primo, o 0 per ignorare;\n";
        int utente;
        cin>> utente;
        if(utente == 1){
            int c;
            //inverto b con a
            c=b;
            b=a;
            a=c;
        }
    }
    if(a%b==0){
        cout<<a<<" multiplo di "<<b<<endl;

    }else{
        cout<<a<<" non multiplo di "<<b<<endl;
    }
    
    return 0;
}
