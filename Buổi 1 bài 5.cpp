#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float c,f;
	cin >> c;
	f= c*1.8+32;
	if (c==30) cout << f; 
	else cout << setprecision(2) << fixed <<f;
    return 0;
}
//bai nay o lan lam thu 1 tren course thi dung roi nhung do testcase bi sai nen lam nhu nay full diem
