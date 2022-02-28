#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    for (int i=-n;i<=n;i++){
        for (int j=-n;j<=n;j++){
            int temp=i;
            int temp1=j;
            if (j >= -(n + temp) && j <= n + temp && i >= -(n + temp1) && i <= n + temp1 && j <= (n - temp) && i >= -(n - temp)){
                cout<<"* ";
            }else{
                cout<<". ";
            }
        }
        cout<< endl;
    }
}
