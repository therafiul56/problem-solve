// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int chek(char str1[],char str2[])    // to chek pallindom
{
    int i=0;
    while(str1[i]!='\0'){
        if(str1[i]!=str2[i]){
            return 0;
        }
        i++;
    }
    return 1;
}
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
    
    if(chek(str1,str2)){
        printf("equal");
    }
    else{
        printf("not equal");
    }

    return 0;
}
