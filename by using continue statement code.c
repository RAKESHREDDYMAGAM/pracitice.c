
#include <stdio.h>

int main()
{
    for(int i=1 ; i<=5;++i){
        for(int j=1;j<=5;++j){
            if(i==3 && j>=2 && j<=4){
                continue;
            }
             printf("%d",j);
            
        }
        printf("\n");
    }

    return 0;
}
