#include <iostream>
using namespace std;
 int main(){
    int n=7;//check no. prime or not
    bool is prime true;
    for (int i=2; i<=n-1; i++){
        if (n% i==0){
            is prime = false;
            break;
        }
        }
        if(is prime ==true){
            cout<<"prime no\n";}
            return 0;
 }