#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max= arr[i];
        
    }
    cout<<"Largest element :"<<max<<endl;
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(smax<arr[i] && max!=arr[i]) smax = arr[i];
        
    }
    cout<<"Second Largest element :"<<smax;


    return 0;
}