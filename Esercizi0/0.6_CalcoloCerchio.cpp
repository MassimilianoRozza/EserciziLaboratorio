/*
Scrivere un programma che ci fa inserire la lunghezza del raggio e calcola il diametro,
circonferenza e area.
Ci sono diversi modi nell'ottenere la costante π, tra cui scriversela a mano.
Fare i calcoli direttamente nei comandi di cout.
*/
using namespace std;
#include <iostream>
int main(int argc, char const *argv[])
{
    double pi=3.1415926535;
    float raggio;
    cout<<"inserire raggio della circonferenza"<<endl;
    cin>>raggio;
    cout<<"diametro = "<< 2*raggio<<endl;
    cout<<"circonferenza = "<<2*pi*raggio<<endl;
    cout<<"area = 2"<< pi*raggio*raggio<<endl;
    return 0;
}