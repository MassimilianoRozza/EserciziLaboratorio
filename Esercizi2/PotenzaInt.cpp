#include<iostream>

int pow(int base, int esponente);

using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    cout<<pow(a,b);
}


int pow(int base, int esponente){
    int potenza=1;
    for(esponente; esponente>0; esponente--){
        potenza*=base;
    }
    return potenza;
}
