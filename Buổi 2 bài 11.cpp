#include<bits/stdc++.h>
using namespace std;

int main()
{
    const int MAX_N = 1000;
    int n;
    cin >>n;
    double a[MAX_N];
    double sum=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    double mean= sum/n;
    double sumNew;
    for (int i=0;i<n;i++){
        sumNew+=(a[i]-mean)*(a[i]-mean);
    }
    cout<< fixed<<setprecision(2)<<sumNew/n;
    
}
