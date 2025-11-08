#include <stdio.h>
void print(int a,int i){
    if(i>a){
        return;
    }
    printf("%d\n",i);
    print(a,++i);
}
int main() {
	int a,i=1;
	scanf("%d",&a);
	print(a,i);
	return 0;
 
}
