#include<stdio.h>

int main(){
  int arr[6] = {2,1,3,4,5,0};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k;
  printf("Enter the element to search \n");
  scanf("%d", &k);
  
  // search
  for(int i=0; i<n; i++){
      if(arr[i]==k){
          printf("Element present at index %d ", i);
          return;
      }
  }
  
  printf("Element not present");
  return 0;
}
