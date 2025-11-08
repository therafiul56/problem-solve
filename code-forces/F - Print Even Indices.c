
#include <stdio.h>
void print(int ar[],int i,int a){
    if(i<0){
        return;
    }
    if(i%2==0){
        printf("%d ",ar[i]);
    }
    
    print(ar,--i,a);
    
    
}
int main() {
	int a,i;
	scanf("%d",&a);
	int ar[a];
	for( i = 0 ; i<a ;i++){
	    scanf("%d",&ar[i]);
	}
	i=--a;
	print(ar,i,a);
	return 0;
 
}
