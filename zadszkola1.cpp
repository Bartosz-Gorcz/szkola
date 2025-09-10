#include <iostream>
using namespace std;

void zad1(){
     for(int i=5; i<16; i++){
        cout<<i<<endl;
    }


}

void zad2(){
    for(int i=20; i>9; i--){
        cout<<i<<endl;
    }
}

void zad3(){
    for(int i=1;i<11;i++){
        cout<<i<<". Bartosz"<<endl;
    }
}

void zad4(){
    for(int i=0;i<4;i++){
        cout<<endl;
        cout<<"*";
        for(int j=0;j<9;j++){
            cout<<"*";
        }
    }
}

void zad5(){
    int s;
    cout<<"Podaj ilosc kolunmn"<<endl;
    cin>>s;
    
    int w;
    cout<<"Podaj ilosc wierszy"<<endl;
    cin>>w;
    
     for(int i=0;i<w;i++){
        cout<<endl;
        cout<<"*";
        for(int j=1;j<s;j++){
            cout<<"*";
        }
    }
    
}

void zad6(){
    for(int i=1;i<11;i++){
        
        for(int j=1;j<11;j++){
            cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        }
    }
    
}



int main()
{
   cout<<"zad1"<<endl;
   zad1();
   cout<<endl;
   
   cout<<"zad2"<<endl;
   zad2();
   cout<<endl;
   
   cout<<"zad3"<<endl;
   zad3();
   cout<<endl;
   
   cout<<"zad4"<<endl;
   zad4();
   cout<<endl;
   
   cout<<"zad5"<<endl;
   zad5();
   cout<<endl;
   
   cout<<"zad6"<<endl;
   zad6();
   cout<<endl;
    return 0;
}