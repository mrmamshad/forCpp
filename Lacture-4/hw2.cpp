#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int count = 1;
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < count; j++){
         cout<<ch;
        }
        ch++;
        count++;
        cout<<endl;
    }
    return 0;
}

// output: A
        // BB
        // CCC
        // DDDD
