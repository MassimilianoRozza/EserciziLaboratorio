#include <iostream>
#include "frasiPalindrome.hpp"
#include <string>

using namespace std;

int main(){
    string frase;
    cout<<"inserire una frase palindroma"<<endl;
    getline(cin, frase);
    cout<<frase;
    togliSpazi(frase);
    togliMaiusc(frase);

}