#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,6,2,3};

    int n = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr; 
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; // ptr is pointing to the first element 
    *ptr = 8;  //ptr[0] = 8;
    ptr++; // ptr is pointing to 2nd element 
    *ptr = 9;
    ptr--; // ptr is pointing to ist elemnt
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;

    return 0;
}