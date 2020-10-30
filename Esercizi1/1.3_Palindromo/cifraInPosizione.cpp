
#include<iostream>
using namespace std;

char cifraInPosizione(int numero, int posizione){
    string num=to_string(numero);
    int lung = num.length();
    
    return num[lung-posizione-1];
}

//FUNZIONE CONTROLLO SE PALINDROMO ==========================================
int palindromo(int numero){
    int flag=0;
    //CONTROLLO LA LUNGHEZZA DEL NUMERO PER EVITARE ERRORI CON LA DIMENSIONE 
    //  DELLE VARIABULI INT
    int lungString=to_string(numero).length();
    if(lungString>=11){
        cerr<<"numero troppo lungo per poter operare il controllo"<<endl;
        flag=2;
    }else{
        for(int a=0; a<lungString/2 && flag==1;a++){
            char b=cifraInPosizione(numero, a);
            char c=cifraInPosizione(numero,lungString-1-a);
            cout<<"cifra in posizine "<<a+1<<" = "<<b<<"\t"<<"cifra in posizione "<<4-a+1<<" = "<<c<<endl;
            if(b==c){
                flag=1;
            }else{
                flag=0;
            } 
        }
    }
    return flag;
}
