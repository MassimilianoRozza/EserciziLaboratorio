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
    for (int a=65; a<=90; a++)
    {
        cout<<"CHAR:     "<<char(a)<<"   ASCII:   "<<a<<endl;
    }
    cout<<endl<<"=========================================================================================================================="<<endl<<endl;
    for (int a=97; a<=122; a++)
    {
        cout<<"CHAR:     "<<char(a)<<"   ASCII:   "<<a<<endl;
    }
    cout<<endl<<"=========================================================================================================================="<<endl<<endl;
    for (int a=48; a<=57; a++)
    {
        cout<<"CHAR:     "<<char(a)<<"   ASCII:   "<<a<<endl;
    }
    return 0;
}
