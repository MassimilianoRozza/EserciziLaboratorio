#include <iostream>
#include <Maxlib.h>
#include <math.h>

using namespace std;

long double NEulero(int & appros);

int main(){
    int approssimazione;
    
    cout<<"inserire numero di addendi da usare per l'approssimazione"<<endl;
    cin>>approssimazione;
    long double e = NEulero(approssimazione);
    cout<<"costante   e="<<exp(1)<<endl;
    cout<<"calcolato: e="<<e<<endl;
    cout<<endl<<"differenza = "<<exp(1)-e<<endl;
}

long double NEulero(int & appros){
    long double e=1;
    for(appros; appros>0;appros--){
        cout<<(1/fattoriale(appros));
        e=e+(1/fattoriale(appros));
    }
    return e;
}