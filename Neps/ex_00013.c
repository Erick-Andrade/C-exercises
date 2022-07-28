#include <stdio.h>

int main(){

    int a, m, total;
    scanf("%d%d", &a, &m);
    total = a + m;
    if (total <= 50) printf("S");
    else printf("N");
    return 0;
}