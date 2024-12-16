#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dependants, gross_pay ;
    float tax_payable, net_pay;
    printf("Enter dependants:\n");
    scanf("%d", &dependants);
    printf("Enter gross_pay:\n");
    scanf("%d", &gross_pay);
    if(dependants<3){
        if(gross_pay<=10000){
            tax_payable=gross_pay*0;
            net_pay=gross_pay-tax_payable;
            printf("tax_payable is %f\n", tax_payable);
            printf("net_pay is %f\n", net_pay);
        }
        else if(gross_pay<=20000){
            tax_payable=gross_pay*0.15;
            net_pay=gross_pay-tax_payable;
            printf("tax_payable is %f\n", tax_payable);
            printf("net_pay is %f\n", net_pay);
        }
        else{
            tax_payable=gross_pay*0.35;
            net_pay=gross_pay-tax_payable;
            printf("tax_payable is%f\n", tax_payable);
            printf("net_pay is %f\n", net_pay);
        }
    }

     else{
        if(gross_pay<=10000){
            tax_payable=gross_pay*0;
            net_pay=gross_pay-tax_payable;
            printf("tax_payable is %f\n", tax_payable);
            printf("net_pay is %f\n", net_pay);
        }
        else if(gross_pay<=20000){
            tax_payable=gross_pay*0.10;
            net_pay=gross_pay-tax_payable;
            printf("tax_payable is %f\n", tax_payable);
            printf("net_pay is %f\n", net_pay);
        }
        else{
            tax_payable=gross_pay*0.25;
            net_pay=gross_pay-tax_payable;
            printf("tax_payable is %f\n", tax_payable);
            printf("net_pay is %f\n", net_pay);
        }
    }
    return 0;
}
