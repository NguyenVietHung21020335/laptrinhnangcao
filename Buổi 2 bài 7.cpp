#include <bits/stdc++.h>
using namespace std;

double giaiThua(int n)
{
    int gt=1;
    for (int i=1;i<=n;i++){
        gt=gt*i;
    }
    return (double)gt;
}

double luyThua(int x,int n)
{
    int lt=1;
    for (int i=1;i<=n;i++){
        lt=lt*x;
    }
    return (double)lt;
}
double fun(int x)
{
    double sum=0;
    int i=0;
    while (luyThua(x,i)/giaiThua(i)>0.0001){
        sum+=luyThua(x,i)/giaiThua(i);
        i++;
    }
    return sum;
}

int main(){
    int x;
    cin>>x;
    cout<<fixed<<setprecision(4)<<fun(x);
    return 0;
}
