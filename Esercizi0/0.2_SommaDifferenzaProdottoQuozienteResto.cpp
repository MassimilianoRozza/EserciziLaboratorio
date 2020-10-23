/*
Scrivere un programma che chide all'utente due numeri e ne calcola somma, prodotto, dierenza, divisione
e resto.
*/
using namespace std;
#include <iostream>
int main(){
    float a,b;
    cout<<"inserire primo numero"<<endl;
    cin>>a;
    cout<<"inserire secondo numero"<<endl;
    cin>>b;
    cout<<"somma="<<a+b<<"\ndifferenza="<<a-b<<"\nprodotto="<<a*b<<"\n";
    if(b!=0){
        cout<<"quoziente di "<<a<<" e "<<b<<"="<< a/b<<endl;
        cout<<"quoziente intero di "<<a<<" e "<<b<<"="<<int(a)/int(b)<<" con resto = "<<int(a)%int(b)<<endl;
    }else{
        cout<<"errore: divisione per 0";
        cout<<"errore: divisione per 0";
    }
}