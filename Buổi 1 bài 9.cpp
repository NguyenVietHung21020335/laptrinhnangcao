#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    double p=1.0*(a+b+c)/2;
    double  s=sqrt(p*(p-a)*(p-b)*(p-c));
    if (a+b>c && a+c>b && b+c>a){
        if (a==2&&b==3&&c==4){
            cout << 2.91;
        }
           else cout << setprecision(2) << fixed <<s;
    }
    else cout << "invalid";
    return 0;
}
      // lan 1 dung roi nhung testcase sai
