#include <stdio.h>

int main() {
    int A,sum=0,max=-10e8,min=10e8;
    float Avg=0;
    scanf("%d",&A);
    int arr[A];
    for(int i =0; i<A ; i++){
        int x;
        scanf("%d",&x);
        arr[i]=x;
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
        
        
    }
    printf("max=%d\nmin=%d",max,min);
     
    return 0;
}
