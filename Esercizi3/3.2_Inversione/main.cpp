/*
SUP che prende una stringa dall'utente che 
può essere anche una frase, comprensiva quindi
di spazie punteggiatura.
Il programma ristampa la stessa stringa al contrario.
*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    string stringa;
    cout<<"inserire testo da invertire"<<endl;
    getline(cin, stringa);
    int len = stringa.length();
    for(int a=0; a<len; a++){
        cout<<stringa[len-a];
    }
    cout<<endl;
}