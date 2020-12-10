#include <iostream>

using namespace std;

//dichiarazione funzioni

//stampa a terminale numero totale di caratteri,
//  numero di lettere e numeri,
//  numero di caratteri non alfanumerici
//  e restituisce il numero totale di caratteri (ovvero la lunghezza della stringa);
int contCaratteri(const char **stringa);

char *separazioneCaratteri( const char **stringa, int len);

char *invertireStringa(const char **stringa, int len);

int contaParole(const char **stringa);


//MAIN===================================================================================
int main(int argc, char const *argv[])
{   
    //controllo dell'errore, troppo pochi o troppi parametri
    if(argc==1 || argc>2){
        cout<<"ERRORE: numero parametri non corretto"<<endl
            <<"     inserire la stringa tra apici('esempio di stringa da inserire')"<<endl;
    }else{ //esecuzione normale del programma
        //conteggio dei caratteri
        int len=contCaratteri(argv);
        char *nuovaStringa=new char[len+len-2];
         //invertire la stringa originale
        nuovaStringa=invertireStringa(argv, len);
        cout<<"stringa invertita"<<endl<<nuovaStringa<<endl<<endl<<endl;;
        //separazione di ogni carattere con un carattere a scelta dell'utente
        nuovaStringa=separazioneCaratteri(argv, len);
        cout<<"ecco la stringa con separatori di caratteri"<<endl<<nuovaStringa<<endl<<endl<<endl;
        delete[] nuovaStringa;
        cout<<"numero di parole="<<contaParole(argv)<<endl;
    }
    return 0;
}

//inizializzazione delle funzioni
char *invertireStringa(const char **stringa, int len){
    char *str=new char[len];
    for(int a = 0; a<len-1; a++){
        str[a]=stringa[1][len-1-a];
    }
    
    cout<<str<<endl;
    return str;
}

char *separazioneCaratteri( const char **stringa, int len){
    char carattere;
    int a=0, i=0;;
    char *str=new char[len+len-2];
    cout<<"con che carattere separare?"<<endl;
    cin>>carattere;
    
    while(stringa[1][a]!='\0'){
        str[i]=stringa[1][a];
        i++;
        str[i]=carattere;
        a++;
        i++;
    }
    return str;
}

int contaParole(const char **stringa){
    int cont = 0;
    for(int a=0;stringa[1][a]!='\0';a++){
        if((isalpha(stringa[1][a-1]) || isdigit(stringa[1][a-1]))&& (ispunct(stringa[1][a])||stringa[1][a]==' ')){
            cont++;
        }
    }
    return cont;
}

int contCaratteri(const char **stringa){
    int a=0, contTot=0, contNoSpace=0;
    while(stringa[1][a]!='\0'){
        contTot++;
        if(isalpha(stringa[1][a]) || isdigit(stringa[1][a])){
            contNoSpace++;
        }
        //debug cout<<argv[1][a]<<endl;
        a++;
    }
    cout<<"dimensione della stringa-->"<<contTot<<endl;
    cout<<"numero lettere e numeri-->"<<contNoSpace<<endl;
    cout<<"numero di caratteri no lettere o numeri-->"<<contTot-contNoSpace<<endl;
    return contTot;
}