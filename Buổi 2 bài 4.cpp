#include <bits/stdc++.h>
using namespace std;

int main(){
    int soCon,soChan;
    cin>>soCon>>soChan;
   
    bool flag = false; 
    for (int i=1;i<=soCon;i++){
        if (i*2+(soCon-i)*4==soChan){
            cout<< "chicken"<<" = "<< i <<", dog ="<<" "<<soCon-i;
            flag = true;
            return 0;
        }
    }
    if (flag==false)
       cout<< "invalid";
}
