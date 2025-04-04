#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a1[n];
    for(int i=0 ;i<n;++i){
        scanf("%d",&a1[i]);
    }
    int m;
    scanf("%d",&m);
    int a2[m];
     for(int i=0 ;i<m;++i){
        scanf("%d",&a2[i]);
    }
    int a3[n+m];
     for(int i=0 ;i<n+m;++i){
         for(int j=i+1;j<n+m;++j){
              if(a3[i]>a3[j]){
            int temp=a3[i];
            a3[i]=a3[j];
            a3[j]=temp;
            }
         }
       
    }
    for(int i=0;i<n+m;++i){
        printf("%d",a3[i]);
    }
    
    return 0;
}
