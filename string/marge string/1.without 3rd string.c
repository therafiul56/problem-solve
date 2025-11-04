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
    char str1[1000],str2[1000],i=0,j;
    scanf("%s%s",str1,str2);
    int len1 = length(str1),len2 = length(str2);
    for(i=len1 ,j=0; i<=len1+len2; i++,j++){
        str1[i] = str2[j];
    }
    printf("%s",str1);
    return 0;
}
