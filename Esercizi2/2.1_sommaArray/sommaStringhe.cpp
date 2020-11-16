# include <iostream>

using namespace std;


bool leggiNumeri(float addendi[], int N){
    bool flag=false;
    float numero;
    for(int a = 0; a<=N-1; a++){
        cout<<"inserisci numero"<<endl;
        cin>>numero;
        if(numero==0){
            flag=false;
            a--;
        }else{
            flag = true;
        }
        addendi[a]=numero;
    }
    return flag;
}

float sommaVet(float addendi[], int N){
    float somma=0;
    for(int a = 0; a<=N-1; a++){
        somma += addendi[a];
    }
    return somma;
}