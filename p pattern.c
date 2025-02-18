

#include <stdio.h>

int main()
{
    int n =7;
    for(int i=0; i<n; ++i){
        for(int j=0;j<n;++j){
            if((i==0 &&  j!=n-1)||(j==0 && i!=0) || (i==n/2 && j!=n-1) ||(j==n-1 && i!=0 && i!=3 && i<=3 )){
                printf("*");
            }
            else {
                printf(" ");
                }
        }
        printf("\n");
    }

    return 0;
}
