/*
Scrivere un programma completo che chiede all'utente tre numeri interi e ne calcola il prodotto.
Occhio: Se invece venisse chiesto di chiedere dieci numeri?
*/
using namespace std;
#include <iostream>
int main(){
    int n_fattori, prodotto=1, a;
    cout<<"inserire numero di fattori da moltiplicare";
    cin>>n_fattori;
    while(n_fattori>0){
        cout<<"inserire un numero"<<endl;
        cin>>a;
        prodotto*=a;
        n_fattori--;
    }
    cout<<"prodotto ="<<prodotto;
}