
#include <stdio.h>

int main()
{
    int number;
    printf("enter a number");
    scanf("%d", &number);
  
    if(number==0)
    {
       printf("%d", 1);
       return 0;
    }
    if(number==1 || number==2)
    {
       printf("%d", number);
       return 0;
    }
       if(number<0)
    {
       printf("error...");
       return 0;
    }
    
    if(number>10)
    {
       printf("error...");
       return 0;
    }
    
    
        
    //return 0; //end  
    int factorial=1;
    
    for(int i=1;i<=number;i++){
        factorial=factorial*i;
        
    printf("%d ", factorial);
    }
    //CODE
    
    

    return 0;
}
