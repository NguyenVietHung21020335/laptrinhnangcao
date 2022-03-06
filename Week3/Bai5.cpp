#include <bits/stdc++.h>
using namespace std;

bool kiemTraMangDoiXung(int n,int array[]){

    for (int k = 0; k < n/2; k++) {
    if ( array[k] != array[n-1-k] )
        return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int array[1001];
    for (int i=0;i<n;i++){
        cin>> array[i];
    }
    if (kiemTraMangDoiXung(n,array)==true){
        cout<<"Symmetric array.";
    }
    else cout<< "Asymmetric array.";
}
