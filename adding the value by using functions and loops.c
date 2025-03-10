
#include <stdio.h>
void modifyArray(int*,int);
int main()
{
    int a[]={ 10,20,30,40,50};
    modifyArray(a,5);
    for(int i=0;i<=4;++i){
        printf("%d\n",a[i]);
    }

    return 0;
}
void modifyArray(int* arr,int size){
    for(int i=0;i<=size;++i){
        arr[i]=arr[i]+5;
    }
}
