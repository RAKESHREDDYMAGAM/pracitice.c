#include <stdio.h>

int main()
{
    int array[]={0,1,2,3,4,5,6};
    int temp;
    int left=array[0];
    int right=array[5];
    
  while(left<right){
      temp=array[left];
      array[left]=array[right];
      array[right]=temp;
      left++;
      right--;
  }
  printf("%d %d %d %d %d %d %d ",array[0],array[1],array[2],array[3],array[4],array[5],array[6]);
}
