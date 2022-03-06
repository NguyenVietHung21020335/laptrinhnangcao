#include<bits/stdc++.h>
using namespace std;

bool checkArray(int A[],int B[],int n)
{

    for (int i= 1; i <=n; i++){
        if (A[i]!=B[i]) return false;
    }
     return true;
}
int main()
{
    int n;
    cin>>n;
    int A[1001];
    int B[1001];
    for (int i= 0; i < n; i++){
        cin>> A[i];
    }
     for (int i= 0; i < n; i++){
        cin>>B[i];
    }
    if (checkArray(A,B,n)==true){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
//Cách 2
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a[1000005],b[1000005];
//     cin >> n;
//     for( int i = 1; i <= n; ++i )
//         cin >> a[i];
//     for( int i = 1; i <= n; ++i ){
//         cin >> b[i];
//         if( b[i] != a[i] ) {
//             cout << "NO";
//             return 0;
//         }
//     }
//     cout << "YES";
//     return 0;
// }
