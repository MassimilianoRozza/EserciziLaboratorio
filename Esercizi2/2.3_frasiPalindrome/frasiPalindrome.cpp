#include <iostream>
/*
#include <stdio.h>
#include <ctype.h>
*/
#include <string>

using namespace std;

void togliSpazi(string &frase){
    for(int a=0; a<frase.length();a++){
        if(ispunct(frase[a])){
            for(int b=a;b<frase.length();b++){
                frase[b]=frase[b+1];
            }
        }
    }
}

void togliMaiusc(string &frase){
    for(int a=0; a<frase.length(); a++){
        if(ispunct(frase[a])){
            putchar (tolower(frase[a]));
        }
    }
}