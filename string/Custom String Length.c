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
    scanf("%s%s",str1,str2);
    int len1 = length(str1);
    printf("the length of the string is : %d",len1);
    return 0;
}
