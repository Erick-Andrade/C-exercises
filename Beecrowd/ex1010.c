#include <stdio.h>

int main(){
    int code1, code2, units1, units2;
    double price1, price2, total;
    scanf("%d%d%lf", &code1 , &units1 , &price1);
    scanf("%d%d%lf", &code2 , &units2 , &price2);
    total = price1 * units1 + price2 * units2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}