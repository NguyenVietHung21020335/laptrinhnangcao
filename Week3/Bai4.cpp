#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int x=0;
    double a[1001];
    for (int i=0; i<n;i++){
        cin>> a[i];
    }
    double k;
    cin>>k;
    for (int i=0;i<n;i++){
        if (a[i]>k){
            x=i;

            break;
        }
    }
    
    for (int i=0; i<x; i++){
        cout<<fixed<<setprecision(2)<<a[i]<<' ';
    }
    cout<<fixed<<setprecision(2)<<k<<' ';
    for (int i=n;i>=x;i--){
        a[i+1]=a[i];

    }
    for (int i=x+1; i<n+1; i++){
        cout<<fixed<<setprecision(2)<<a[i]<<' ';
    }
}
// Cach 2
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a[1000005];
//     cin >> n;
//     for( int i = 1; i <= n; ++i )
//         cin >> a[i];
//     n = unique( a + 1, a + n + 1 ) - a - 1;
//     for( int i = 1; i <= n; ++i )
//         cout << a[i] << ' ';
//     return 0;
// }
