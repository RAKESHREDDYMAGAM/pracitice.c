
#include <stdio.h>

int main()
{
    
   
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    
    
    if( num>0 ){
        printf("positive");
        return 0;
    }
    if( num==0 ){
        printf("zero");
        return 0;
    }
    
   
    else{
        printf("negative");
    }
    
   

    return 0;
}
