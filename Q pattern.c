#include <stdio.h>
int main()
{
     int n=7;
    for(int i=0; i<=n-1; ++i){
        for(int j=0; j<=n-1; ++j){
        if(((j==1 || i==1 || i==5 || j==5) &&i!=0 && i!=n-1 && j!=0 && j!=n-1) || (i==j && i!=1 && i!=0 && i!=2) )
        {
        printf("*");
        }
        
        else{
        printf(" ");

            
        }
         
     }
     printf("\n");
        
    }
    return 0;
    
}
