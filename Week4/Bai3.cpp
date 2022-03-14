void printArrow(int n, bool left)
{
    if (left==0){
        for (int i=-n+1;i<n;i++){
            for (int j=2*n-2*abs(i)-2;j>0;j--){
                cout << ' ';
                }
            for (int j=0; j<=abs(i); j++) {
                cout<<'*';
            }
            cout<< endl;
        }
    }
    if (left==1){
        for (int i=-n+1;i<n;i++){
            for (int j=abs(i);j>0;j--){
                cout << ' ';
                }
            for (int j=0; j<=abs(i); j++) {
                cout<<'*';
            }
            cout<< endl;
        }
    }
}
