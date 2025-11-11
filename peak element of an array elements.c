#include <stdio.h>

int main()
{ int a[]={10,20,15,30,25,40,50,20};
  int i;
  int size=8;
  
  int peak=a[i];
  
  for( i=1;i<=7;++i){
      if(a[0]>a[i+1]||(a[i-1]<a[i] && a[i]>a[i+1])||(a[i-1]<a[i])){
          peak =a[i];
          printf(" %d " ,peak);
      }
      else {
        //   break;
      }
  }
    
    return 0;
}
