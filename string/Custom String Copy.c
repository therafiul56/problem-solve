#include <stdio.h>
#include <string.h>

int length(char str[])      // to chek length
{
    int i = 0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
int main() {
    char str1[1000],str2[1000],i=0;
    scanf("%s",str1);
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("%s",str2);
    
    return 0;
}
