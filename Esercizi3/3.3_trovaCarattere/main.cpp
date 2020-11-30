#include <iostream>
#include <sstream>
#include <string>

using namespace std;
/*
Localizzare in una stringa tutte le occorrenze
di un determinato carattere.
Le stringhe in ingresso sono composte di sole
lettere minuscole e spazi.
Il programma stampa la stessa stringa in 
ingresso con le occorrenze trovate convertite
a lettere maiuscole.
Stampa inoltre un conteggio delle occorrenze.
*/

int main(){
    string stringa;
    char carattere;
    int counter=0;
    cout<<"inserire testo"<<endl;
    getline(cin, stringa);
    cout<<"inserire carattere da trovare"<<endl;
    cin>>carattere;
    int len = stringa.length();
    //a carattere minuscolo
    string stringaMinuscola;
    for(int a=0;a<len;a++){
        stringaMinuscola=tolower(stringa[a]);
    }
    //ricerca del carattere
    for(int a=0; a<len; a++){
        if(stringa[a]==carattere){
            stringa[a]=toupper(stringa[a]);
            counter++;
        }
    }
    cout<<"\""<<carattere<<"\""<<"trovato -->"<<counter<<"volte"<<endl;
    cout<<stringa<<endl;
}