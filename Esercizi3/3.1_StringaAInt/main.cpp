#include <iostream>
#include <sstream>
/*
SUP che prende una stringa del tipo "923D" ed estrae il numero, convertendolo in int.
La lettera D è sempre alla fine della stringa.
Verificare il funzionamento anche con numeri negativi.
Esistono diversi modi per fare questa conversione, ma probabilmente la soluzione più semplice è usare il metodo nativo C++,
che è la prima soluzione proposta dal sito.
*/

using namespace std;

int main(int argc, char const *argv[])
{
    string stringa;
    cout<<"inserire stringa"<<endl;
    cin>>stringa;
    int len = stringa.length();
    if(stringa.compare(len-1, 1, "D", 0,1)==0){
        int stringInt = stoi(stringa);
        cout<<stringInt<<endl;
    }else{
        cout<<"struttura della stringa non corretta"<<endl;
    }
}
