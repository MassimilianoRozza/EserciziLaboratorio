#include<iostream>
#include<Maxlib.h>
using namespace std;
/*
SUP che stampa senza sosta i multipli di due.
Quindi 2, 4, 8, 16, eccetera.
Il loop è infinito.
Cosa succede e perché?
*/

int potenzaNesima(int base, int esponente);

int main(){
    int base=2, esponente=33, a;
    cout<<"se si desidera ricevere la tavola delle potenze"<<endl
    <<"di un numero in prticolare premere 1"<<endl
    <<"altrimenti inserie 0 e verranno calcolate le potenze di 2"<<endl;
    cin>>a;
    if(a==1){
      cout<<"inserire base"<<endl;
      cin>>base;
      cout<<"inserire esponente"<<endl;
      cin>>esponente;
    }
    potenzaNesima(base, esponente);
    cout<<"dopo un determinato valore dell'esponente,"<<endl
      <<"il valore della potenza non sarà più"<<endl
      <<"corretto, ciò è dovuto ad un errore"<<endl
      <<"nell'interpretazione della variabile intera"<<endl
      <<"a causa della sua codifica"<<endl
      <<"l'apparizione dell'errore è posticipabile cambiando"<<endl
      <<"il tipo."<<endl;
}

int potenzaNesima(int base, int esponente){
  for(int esp=0;esp<=esponente;esp++){
    /*
    la riga seguente esegue la stampa del
    risultato in forma n^x=p;
    se si vuole un output del tipo p commentare
    la riga seguente e scommentare la 28°.
    */
    cout<<"2^"<<esp<<"="<<powInt(base, esp)<<endl;
    //cout<<potenzaNesima(base, esp)<<endl;
  }
  return 0;
}
