#include <stdio.h>

int timUCLN(int a, int b) {
    int ucln = 1;
    for (int i = 1 ;i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }
    return ucln;
}
int main() {
    int so1, so2;
    printf("Nhap so thu nhat ");
    scanf("%d", &so1);
    printf("Nhap so thu hai ");
    scanf("%d", &so2);
    int ucln = timUCLN(so1, so2);
    printf("UCLN cua %d va %d la %d\n", so1, so2, ucln);
    return 0;
}

