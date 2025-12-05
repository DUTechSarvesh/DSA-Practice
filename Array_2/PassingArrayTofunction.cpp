#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[],int size){
    b[0] = 8;
}
int main(){
    int arr[] = {1,2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<5;i++){
       
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    display(arr,n);
    change(arr,n);
    display(arr,n);

    return 0;
}