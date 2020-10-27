#include <iostream>
#include <Maxlib.h>
using namespace std;
/*

*/
int main(){
    int numero, fattoriale=1;
    cout<<"inserire il numero di cui si vuole calcolare il fattoriale"<<endl;
    cin>>numero;
    if(numero<13){
        cout<<numero<<"! = "<<fattorialeRicorsivo(numero, fattoriale)<<endl;
    }else{
        cout<<"il fattoriale del numero inserito non rientra nel range dei numeri"<<endl
        <<"contenuti nel tipo di variabile usata"<<endl;
    }

}