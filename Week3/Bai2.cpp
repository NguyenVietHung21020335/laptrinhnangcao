#include<bits/stdc++.h>
using namespace std;
void nhap(double a[], int &n){
    do{

        cin>>n;
    }
    while(n<2||n>101);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

void xuat(double a[], int n){
    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(2)<<a[i]<<' ';
    }
}
void SortUp(double a[], int n){
    double Mid;
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[j]<a[i]){
                Mid=a[i];
                a[i]=a[j];
                a[j]=Mid;
            }
        }

    xuat(a,n);
}

int main(){
    double a[100];
    int n;
    nhap(a,n);
    SortUp(a,n);
    return 0;
}
//Cách 2
// #include<bits/stdc++.h>
// using namespace std;
// bool cmp( double a, double b)
// {
// 	return ( a > b );
// }
// int main()
// {
//     int n;
//     double a[1000005];
//     cin >> n;
//     for( int i = 1; i <= n; ++i )
//         cin >> a[i];
//     sort( a + 1 , a + n + 1 ,cmp );
//     for( int i = 1; i <= n; ++i )
//         cout << fixed << setprecision(2) << a[i] << ' ';
//     return 0;
// }
