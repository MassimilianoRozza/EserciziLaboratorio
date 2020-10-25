#include<iostream>
using namespace std;
char cifraInPosizione(int numero, int posizione){
    string num=to_string(numero);
    int lung = num.length();
    
    return num[lung-posizione-1];
}