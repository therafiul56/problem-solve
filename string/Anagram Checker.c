// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int chek(char str1[],char str2[],int len)    // to chek anagram
{
    int i,count=0;
    for(i=0 ; i<len; i++)
    {
        for(int j = 0 ; j<len;j++)
        {
            if(str1[i]==str2[j])
            {
                count++;
                str2[j]='\0';
                break;
            }
        }
        
    }
    if(len == count){
        return 1;
    }
    else {
        return 0;
    }
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
    int len1 = length(str1), len2 = length(str2);
    if(len1 != len2){
        printf("not anagram");
        return 0;
    }
    else{
        if(chek(str1,str2,len2)){
        printf("anagramm");
    }
        else{
            printf("not anagramm");
        }
    }
    
    
    
    

    return 0;
}
