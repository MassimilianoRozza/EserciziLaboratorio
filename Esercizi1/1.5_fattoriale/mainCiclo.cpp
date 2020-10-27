#include<iostream>
#include<Maxlib.h>

int main (){
    int numero;
    cout<<"inserire il numero di cui si vuole calcolare il fattoriale"<<endl;
    cin>>numero;
    if(numero<13){
        cout<<numero<<"! = "<< fattoriale(numero)<<endl;
    }else{
        cout<<"il fattoriale del numero inserito non rientra nel range dei numeri"<<endl
        <<"contenuti nel tipo di variabile usata"<<endl;
    }
}

    