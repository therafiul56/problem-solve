#include <stdio.h>
#include <string.h>


int main() {
    char Sellars_name[100];
    float Basic_sallary,Product_sold,Bonus,profit;
    printf("Enter the name of selseman:");
    scanf("%s",&Sellars_name);
    printf("Enter Basic selary:");
    scanf("%f",&Basic_sallary);
    printf("Value of total product :");
    scanf("%f",&Product_sold);
    printf("Rate of profit:");
    scanf("%f",&profit);
    Bonus = Product_sold * profit/100;
    printf("Name of selseman%s\n",Sellars_name);  
    printf("TOTAL = R$ %.2f\n",Basic_sallary+Bonus);
  
    return 0;
}
