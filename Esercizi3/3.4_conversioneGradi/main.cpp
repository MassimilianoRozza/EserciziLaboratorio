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

int divTok(const string & str1, const string & str2, string & res){
    int *pos = new int[str1.length()];
    int cont =0, len=str1.length();
    for(i=0; i<len; i++){
        if(str1[i]==str2){
            pos[cont]=i;
            cont++;
        }
    }
    for(int i=0; i<len, i++){
        res
    }
   return 0; 
}

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
        
        cout<<stringhe<<endl;
    }
}