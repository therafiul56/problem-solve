#include <stdio.h>

int main() {
    int A,temp,a=-10e8;
    scanf("%d",&A);
    int arr[A];
    for(int i=0 ; i<A ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0 ; i<A-1 ; i++){
        for(int j=i+1 ; j<A ; j++  ){
            if (arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0 ; i<A ; i++){
        printf("%d ",arr[i]);
    }
    

    return 0;
}
