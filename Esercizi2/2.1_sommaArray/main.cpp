#include <iostream>
#include "sommaStringhe.hpp"

using namespace std;

int main(){
    int numeroAddendi=10;
    cout<<"inserisci numero di addendi"<<endl;
    cin>>numeroAddendi;
    cout<<"inserisci 10 numeri"<<endl;
    float addendi[numeroAddendi];
    leggiNumeri(addendi, numeroAddendi);
    cout<<"somma ="<< sommaVet(addendi, numeroAddendi)<<endl;
}