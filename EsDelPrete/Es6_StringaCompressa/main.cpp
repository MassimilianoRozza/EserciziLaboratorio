#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    int flag =0;
    
    //centrollo errore di inserimento dati
    if(argc!=2){
        cout<<"errore inserimento dati";
        flag = -1;
    }else{
        const char *s = argv[1];
        int i=0;
        while(s[i]!='\0') {
            int count=1;
            for(int a =i; s[a]==s[a+1];a++){
                if(s[a+1]==s[a]){
                    count++;
                }
            }
            if(count!=1){
                cout<<s[i]<<count;
            }else{
                cout<<s[i];
            }
            i+=count;
        }
    }
    return flag;
}
