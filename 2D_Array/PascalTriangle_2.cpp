#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    int m;
    cout<<"Enter the rows Index :";
    cin>>m;
    vector<vector<int>> v;
    
    int next = 1;
    int icj = 1;
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            vector<int> a(i+1,1);
            icj =  icj*(i-j+1)/j;  
            a.push_back(icj);        // C(n,k)=C(n,k−1)*n−k+1/k
            cout<<v[i][j];

        }
    }

    



    return 0;
}