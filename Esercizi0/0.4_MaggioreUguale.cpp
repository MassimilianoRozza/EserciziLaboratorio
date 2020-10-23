/*
Scrivere un programma che chide all'utente di inserire due interi, e poi scrive il numero più grande
seguito dalla string " is larger". Se i due numeri sono uguali, scrivi il messaggio " These numbers
are equal".
*/
using namespace std;
#include <iostream>
int main(){
    int a, b;
    cout<<"Inserire due numeri"<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<endl<<a<<" is larger"<<endl;
    }
    if(b>a){
        cout<<endl<<b<<" is larger"<<endl;
    }
    if(a==b){
        cout<<endl<<"these numbers are equal"<<endl;
    }
}