#include <iostream> 
 using namespace std; 
 int linearSearh (int arr [], int sz){
    for (int i=0; i<sz; i++)
    {
        if(arr [i]== target ){
            return i;
            
        }
    }
    return -1;
 } 
 int main(){
    int arr[]={4,2,7,8,1,5,6};
    int sz=7;
    int target=8;
    cout << linearSearch (arr,sz,target)<<endl;
    return 0;
 }
 