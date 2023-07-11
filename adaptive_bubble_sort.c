#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y){
  int temp; 
  temp=*x;
  *x=*y;
  *y=temp;
}

void bubble_sort(int A[], int n){
  int i, j, flag;         //flag basically stops the passes when the array is sorted so if my array is already sorted i just have to compare the elements (n-1 comp_ so the best case TC = O(n) bubble sort is adaptive
for(i=0; i<n-1; i++){      //i passes
    flag=0;
    for(j=0; j<n-1-i; j++){      //j comparisions
      if(A[j]>A[j+1]) {
          swap(&A[j], &A[j+1]);
          flag=1;
        }
    }
  if(flag==0) break;
 }
}
int main(){
  int A[]={11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n=10, i;
  bubble_sort(A, n);
    for(i=0; i<n; i++){
        printf("%d ", A[i]);
    }
return 0; 
}
      
    
