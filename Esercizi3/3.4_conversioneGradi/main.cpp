#include <iostream>
#include <sstream>
#include <string.h>

using namespace std;

/*
SUP esegue parsing di stringa e svolge una funzionalità programmabile.
Nello specifico il programma prende in input una stringa di valori di temperatura
del tipo "20C@34F@12F@23C" e converte questi ingradi Kelvin.
Stampare due tabelle distinte per conversioni Celsius e Fahrenheit.
*/

int main(){
    string stringa;
    int counter=0;
    // lettura input 
    cout<<"inserire stringa da analizzare"<<endl;
    getline(cin, stringa);

    //contaggio caratteri separatori
    int len = stringa.length();
    for(int a=0; a<len; a++){
        if(stringa[a]=='@'){
            counter++;
        }
    }

    // divisione in substringhe
    char delim = '@';
    string *stringhe = new string[counter+1];
    for(int a = 0; a<len; a++){
        stringhe[a] = strtok(delim, stringhe[a]);    
    }
}