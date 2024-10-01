#include <iostream> 
using namespace std; 
 void changeArr (int arr[], int size ){
    cout << "in function \n";
    for(int i=0; i<size; i++){
        arr [i]=2*arr [i];
    }
    }
 int main() {
    int Arr[]= {1,2,3};
    changeArr (Arr,3);
    cout <<"int main\n";
    for (int i=0; i<3; i++ )
    {
        cout << Arr [i]<< " ";
    }
    cout <<endl;
    return 0; 
 
 }