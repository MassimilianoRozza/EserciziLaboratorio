/*
Scrivere un programma che stampa la tabella ASCII in questo formato, limitandosi alle lettere maiuscole, minuscole e le dieci cifre:
CHAR:   A   ASCII:  65
CHAR:   B   ASCII:  66
CHAR:   C   ASCII:  67
*/
using namespace std;
#include <iostream>
int main(int argc, char const *argv[])
{
    /*
    + assegno alla variabile a il numero corrispondente
        alla lettera "a";
    + poi nel ciclo aumento il valore della variabile 
        finché il valore di a è minore o uguale al numero 
        corrispondente alla lettera "z";
    */
    for (int a=char('a'); a<=char('z'); a++)
    {
        /*
        stampo "CHAR: <carattere>     ASCII: <numero-corrispondente-al-carattere>
        */
        cout<<"CHAR:     "<<char(a)<<"   ASCII:   "<<a<<endl;
    }
    /*
    separo con una linea orizzontale la stampa delle lettere 
    minuscole dalle successive.
    */
    cout<<endl<<"=========================================================================================================================="<<endl<<endl;
    /*
    + assegno alla variabile a il numero corrispondente
        alla lettera "A";
    + poi nel ciclo aumento il valore della variabile 
        finché il valore di a è minore o uguale al numero 
        corrispondente alla lettera "Z";
    */
    for (int a=char('A'); a<=char('Z'); a++)
    {
        cout<<"CHAR:     "<<char(a)<<"   ASCII:   "<<a<<endl;
    }

    //separatore
    cout<<endl<<"=========================================================================================================================="<<endl<<endl;
    
    /*
    + assegno alla variabile a il numero corrispondente
        al carattere "0";
    + poi nel ciclo aumento il valore della variabile 
        finché il valore di a è minore o uguale al numero 
        corrispondente al carattere "9";
    */
    for (int a=char('0'); a<=char('9'); a++)
    {
        cout<<"CHAR:     "<<char(a)<<"   ASCII:   "<<a<<endl;
    }
    return 0;
}
