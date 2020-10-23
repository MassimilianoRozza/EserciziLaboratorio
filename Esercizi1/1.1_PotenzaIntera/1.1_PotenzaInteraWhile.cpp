/*
SUP che si fa dare due numeri interi x e y e calcola x^y.
Fare due versioni, una che per il loop interno usa for, l'altra che usa while. Non usare pow(), 
questo perché se andate a leggere la documentazione, vedrete che prende in ingresso due double, significa quindi che al 
suo interno non compie un elevamento a potenza tra interi, ma tra numeri reali.
Pur permettendoci di ottenere lo stesso risultato, questo implica che l'esecuzione sarà ben più lenta e inoltre potremmo 
imbatterci in errori numerici.
*/

#include<iostream>

int powInt(int base, int esponente);

using namespace std;
int main(){
    int a, b;
    cout<<"inserire base ed esponente:"<<endl;
    cin>>a>>b;
    cout<<powInt(a,b);
}


int powInt(int base, int esponente){
    int potenza=1;
    while(esponente!=0){
        potenza*=base;
        esponente--;
    }
    return potenza;
}
