#include<stdio.h>
int main(){
    int arr[6] = {1,2,6,9,10,44};
    int s =0;
    int e = 6-1; 
    int k = 10;
    
    while (s<=e)
    {
        int mid = s + (e-s)/2;
        if (arr[mid] == k)
        {
            printf("Element present at index %d ", mid);
            return;
        }
        if (k > arr[mid]) // go to right side of array
            s = mid+1;
        if(k < arr[mid])
            e = mid-1;
    }
    
    printf("Element not present in given array.");
    return 0;

}
