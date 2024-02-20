#include <stdio.h>

int main() {
    int  num2, sum;
    int num1=12;    
   
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("The sum of %d and %d is %d.", num1, num2, sum);
    
    return 0;
}
