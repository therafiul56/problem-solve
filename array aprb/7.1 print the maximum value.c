#include <stdio.h>

int main() {
    int A,maximus;
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
            max = arr[i];
        }
    }
    printf("%d",max);
   
    return 0;
}
