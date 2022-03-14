long long int factorial(int n)
{
    long long giaiThua=1;
    for ( int i=1;i<=n;i++){
        giaiThua*=i;
    }
    return giaiThua;
}
