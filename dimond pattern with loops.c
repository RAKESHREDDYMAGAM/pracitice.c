 #include <stdio.h>
 int main()
 {
   int n=7;
   
   for(int i=0; i<=n-1; ++i){
       for(int j=0; j<=n-1; ++j){
           if(i+j>=n/2 && i<=n/2 && j-i<=n/2){
               printf("*");
           }
           else if(i-j<=n/2 && i>=n/2 && i+j<=n+n/2-1){
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
