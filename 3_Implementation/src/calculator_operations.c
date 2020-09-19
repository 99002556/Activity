#include <calculator_operations.h>
#include<math.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
long factorial(int operand1)
{
	int i,fact = 1;
if (operand1 == 0)
        return 1;
    else {
        for (i = 1; i <= operand1; ++i) {
            fact *= i;
        }
         return fact;
}
int power(int operand1,int operand2) 
{ 
    if (operand2 == 0) 
        return 1; 
    else if (operand2 % 2 == 0) 
        return pow(operand1, operand2 / 2) * pow(operand1, operand2 / 2); 
    else
        return operand1 * pow(operand1, operand2 / 2) * pow(operand1, operand2 / 2); 
}
int squareroot(int operand1)
{
	if(operand1==0)
		return 0;
	else
		return sqrt(operand1);
}
}












