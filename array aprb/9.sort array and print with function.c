#include <stdio.h>
void Scanarr(int a[],int *n)                           // to input the value of array;
{
    for(int i = 0 ; i<*n ; i++){                       // in *n i have dereferizing value of n;
        scanf("%d",&*(a+i)); 
    }
}
void swap(int a[],int b[],int n, int m)                // to swap arr;
{
    int temp = *(a+n);
    *(a+n)= *(b+m);
    *(b+m)=temp;
}
void sort(int a[],int * n)                          // to sort the prbs;
{
    int max = *a;
    for(int i = 0; i<*n-1 ; i++){
        for(int j = i+1; j<*n ; j++){
            if(*(a+i)>*(a+j)){
                swap(a,a,i,j);
            }
        }
    }
}
void Printarr(int a[],int *n){
    for(int i = 0 ; i<*n ; i++){
        printf("%d ",*(a+i));
    }
}


int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	Scanarr (a,&n);
    sort(a,&n);
    Printarr(a,&n);
    return 0;	
}
