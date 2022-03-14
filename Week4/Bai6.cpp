double calculate (double num1, char operat, double num2)
{
    double result=0;
    switch (operat) {
        case '+':
            result= num1 + num2 ;
            break;
        case '-':
            result= num1 - num2;
            break;
        case '*':
            result= num1 * num2;
            break;
        case '/':
            result= num1 / num2;
            break;

    }
    return result;
}
