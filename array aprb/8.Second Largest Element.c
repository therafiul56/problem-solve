#include <stdio.h>
#include <limits.h>

int main() {
    int A,maximus=INT_MIN;
    scanf("%d",&A);
    int arr[A];
    for(int i=0 ; i<A ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0 ; i<A ; i++)
    {
        if(arr[i]>max)
        {
            maximus = max ;
            max = arr[i];
        }
        else if(arr[i]>maximus && arr[i]!=max){
            maximus=arr[i];
        }
        
    }
    if(maximus == INT_MIN){
            printf("no 2nd largest number number");
    }else{
    printf("%d",maximus);
    }
   
    return 0;
}
