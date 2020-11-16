#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float reciproco(int & a);
float esp(int & num);

int main(){
    int numero;
    float e=0;
    cout.setf(ios::fixed);
    cout<<"inserire numero di iterazioni"<<endl;
    cin>>numero;
    cout<<"inserito:";
    cout<<setprecision(5)<<"e="<<double(exp(1))<<endl;
    e=esp(numero);
    cout<<e<<endl;

}

float reciproco(int & a){
    return 1/a;
}

float esp(int & num){
    if(num>0){
        return reciproco(num)+esp(--num);
    }
    if(num=0){
        return reciproco(num);
    }
}