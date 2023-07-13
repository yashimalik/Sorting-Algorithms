#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y){
      int temp;
      temp=*x;
      *x=*y;
      *y=temp;
}

int partition(int A[], int l, int h){
  int pivot=A[l];
  int i=l, j=h;
  
    do{
    do{i++;}
        while(A[i]<=pivot);
    do{j--;}
        while(A[j]>pivot);
    if(i<j){
        swap(&A[i], &A[j]);
    }
    }
    while(i<j);
        swap(&A[l], &A[j]);
          return j;
    }
void quick(int A[], int l, int h){
  int j;
  if(l<h){
  j=partition(A,l,h);
  quick(A, l, j);
  quick(A, j+1, h);
  }
}

int main(){
  int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;

  quick(A, 0, n);
  for(i=0; i<n; i++){
    printf("%d ", A[i]);
      }
    return 0;
}
  
