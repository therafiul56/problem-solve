#include <stdio.h>
#include <string.h>

int main() {
    char S[100];
    size_t length=0;
    fgets(S,sizeof(S),stdin);
    S[strcspn(S,"\n")]='\0';
    size_t i=0;
    while(S[i])
    {
        length++;
        i++;
    }

    printf("%zu",length);

    return 0;
}
