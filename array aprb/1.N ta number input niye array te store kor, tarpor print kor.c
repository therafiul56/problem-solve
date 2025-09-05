#include <stdio.h>
int main() 
{ 
    int A; 
    scanf("%d",&A); 
    int arr[A]; 
    for(int i =0; i<A ; i++)
    { 
        int x; 
        scanf("%d",&x); 
        arr[i]=x; 
        
    } 
        for(int i =0 ; i<A ; i++)
        { 
            printf("%d ",arr[i]); 
            
        } 
        return 0; 
    
}
