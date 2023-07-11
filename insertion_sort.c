#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int A[], int n){
  int i, j, x;
  for(i=0; i<n; i++){
        j=i-1;            //we get a sub array that is always sorted
        x=A[i];
        while(A[j]>x && j>-1){
              A[j+1]=A[j];
              j--;
        }
              A[j+1]=x;
  }
}
int main(){
    int A[]={11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n=10, i;
      insertion_sort(A, n);
    for(i=0; i<n; i++){
        printf("%d ", A[i]);
    }
return 0; 
}

