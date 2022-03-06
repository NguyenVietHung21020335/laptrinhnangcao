#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int alpha = 0,number = 0,sym = 0;
    for ( int i=0;i<s.size();i++){
        if (('a' <= s[i] && s[i] <= 'z' )|| ('A' <= s[i] && s[i] <= 'Z')) {
            alpha++;
        } else if ('0' <= s[i] && s[i] <= '9') {
            number++;
        } else {
            sym++;
        }
    }
    cout << alpha<<' '<<number<<' '<<sym;
}
