#include <iostream>
using namespace std;

int main(){
    int tab[4];
    int t;
    cout<<"Podaj 4 liczby"<<endl;
    for(int i=0; i<4; i++){
        cin>>tab[i];

    }
            cout<<endl;

    for(int j=0; j<4; j++){
        for(int k=0; k<4; k++){
            if(tab[j]<tab[k]){
                t = tab[j];
                tab[j] = tab[k];
                tab[k] = t;
            }
        }

    }
    for(int z=0; z<4; z++){
        cout<<tab[z]<<endl;
    }
    return 0;
}
