
#include <stdio.h>

int main()
{
    // char elem=64+i;
   
    for(int i=1; i<=5;++i){
    char elem=64+i;
        for(int j=1;j<=5-i+1;++j){
            printf("%c",elem++);
            
        }
        //  ++elem;   
        printf("\n");
    }

    return 0;
}
