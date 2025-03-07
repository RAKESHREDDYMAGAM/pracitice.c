
#include <stdio.h>

int main()
{
    
    char operator;
    
    printf("enter the operator");
    scanf("%c",&operator);
    
    float a;
    float b;
    printf("enter a");
    scanf("%f",&a);
    printf("enter b");
    scanf("%f",&b);
     
     if (operator == '+'){
         printf("%f",a+b);
     }
     if (operator == '-'){
         printf("%f",a-b);
     }
     if (operator == '*'){
         printf("%f",a*b);
     }
     if (operator == '/'){
         printf("%f",a/b);
     }

    return 0;
}
