bool isPrime (int number)
{
    bool checkPrime= true;
    if (number<=1) return false;
    for(int i=2;i<=sqrt(number);i++){
        if(number%i==0){
            checkPrime=false;
            break;
        }
    }
    return checkPrime;
}
