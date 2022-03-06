#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int k = 0;
    //khong sua dau cach o dau xau
    while(s[k]==' ' ) {
    	cout << s[k];
    	k++;
    }
    //sua loi cua Nhat
    for( int i = k; i < s.size(); ++i )
    {
        if( s[i] == ' ' && s[i-1] == ' ' ) continue ;
        cout << s[i];
    }
}
