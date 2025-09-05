#include <stdio.h> 
int main() 
{ 
    int A,sum=0,avg; 
    float Avg=0; 
    scanf("%d",&A); 
    int arr[A]; 
    for(int i =0; i<A ; i++)
    { 
        int x; 
        scanf("%d",&x); 
        arr[i]=x; 
        sum= sum+arr[i]; 
        
    } 
    Avg=(float)sum/A; 
    printf("sum=%d \navg=%f",sum,Avg); 
     
    return 0; 
}
