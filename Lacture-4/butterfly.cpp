#include<iostream>
using namespace std;

int main(){
    int n = 4; 

    for(int i = 0; i < n; i++){
        for(int j = 1 ; j <= i + 1 ; j++){
            cout<<"*";
        }
        for( int j = 0; j == ( (6 -i) % 2 == 0); j++){
            cout<<" a";
        }
          for(int j = 1 ; j <= i + 1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}