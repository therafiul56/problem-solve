#include <stdio.h>
void Scanarr(int a[],int *n) // to input the value of array;
{
    for(int i = 0 ; i<*n ; i++){ // in *n i have dereferizing value of n;
        scanf("%d",&*(a+i));
    }
}
int maxchek(int a[],int n)      // to cheak the max array;
{
    int max = *a;
    for(int i = 0; i<n ; i++){
        if(max < *(a+i))          // *(a+i) == arr[i] && *a == a[0];
        {
            max = *(a+i);
        }
    }
    return max;
}
int minchek(int a[],int n){
    int min = *a;
    for(int i = 0; i<n ; i++){
        if(min > *(a+i)){
            min = *(a+i);
        }
    }
    return min;
}

int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	Scanarr (a,&n);
    printf("%d %d",minchek(a,n), maxchek(a,n));
    return 0;	
}
