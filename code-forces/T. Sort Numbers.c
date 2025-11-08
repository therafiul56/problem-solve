#include <stdio.h>
 
void swap(int *a , int * b)                // to swap arr;
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
 
 
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int m=a,k=b,l=c;
    if (a > b) swap(&a, &b);
    if (a > c) swap(&a, &c);
    if (b > c) swap(&b, &c);
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,b,c,m,k,l);
	
    return 0;	
}
