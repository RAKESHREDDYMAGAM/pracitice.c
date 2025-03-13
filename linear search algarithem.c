
#include <stdio.h>

int main()
{
    int a[]={10,20,30,40,50};
    int key=90;
    int size=5;
    int i;
    int elem=0;
    for(i=0;i<=size-1;++i){
        if(a[i]==key){
            elem=1;
            break;
        }
    }
    if(elem==0){
        printf("not found");
    }
    else{
        printf("%d",i);
    }

    return 0;
}
