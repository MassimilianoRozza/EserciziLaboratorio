#include <iostream>
 
using namespace std;

int main () {
    int vettore[10];
    cout<<"inserire 10 numeri"<<endl;
    for(int a=0;a<10;a++){
        cin>>vettore[a];
    }
    int sum=0;
    for(int a=0;a<10;a++){
        sum=vettore[a];
    }
    return sum;
}