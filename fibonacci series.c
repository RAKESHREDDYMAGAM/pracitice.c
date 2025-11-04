
#include <stdio.h>

int main()
{
    int x=0;
    int y=1;
    int z=x+y;
    int N;
    scanf("%d",&N);
    printf("%d ", x);
    printf("%d ", y);
    printf("%d ", z);
    //x=0
    //y=1  
    //z=1  
  for(int i=1;i<=N-2;i++){
        x=y;
    y=z;
    z=x+y;
    printf("%d ", z);
  }
   

    return 0;
}
