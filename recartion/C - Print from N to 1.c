#include <stdio.h>
void print(int a,int i){
    if(i<=0){
        return;
    }
    if(i>1){
        printf("%d ",i);
    }
    
    else if(i==1){
        printf("%d",i);
    }
    print(a,--i);
    
}
int main() {
	int a;
	scanf("%d",&a);
	int i = a;
	print(a,i);
	return 0;
 
}
