#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Order of a matrix :";
    cin>>n;

    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    cout<<"The given matrix is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"The new matrix is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                cout<<mat[i][j]<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }



    return 0;
}