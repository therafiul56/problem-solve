// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000],str2[1000];
    scanf("%s",str1);
    int i=0;
    while(str1[i]!='\0'){
        if(str1[i]>'A'&& str1[i]<'Z'){
            str1[i]+=32;
        }
        i++;
    }
    printf("%s",str1);
    
    
    return 0;
}
