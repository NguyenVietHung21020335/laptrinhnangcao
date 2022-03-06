#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1001];
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>a[i];
        
    }
    for (int i=0 ;i<n; i++){
        
        if(i==0){
            cout<<a[0]<<' ';
        }
        if(i!=0 && a[i]!=a[i-1]){
            cout<<a[i]<<' ';
        }
    }
    
    return 0;    

}
