#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    float delta, r1, r2;

    printf("Digite a b c: \n");
    scanf("%d %d %d", &a, &b, &c);

    delta = (b * b) - (4 * a * c); 

    if (delta < 0) {
        printf("Não existem raízes reais\n");
    }

    if (delta == 0) {
        r1 = (-b + sqrt(delta)) / (2 * a);
        printf("Esta equação só tem uma raíz real: %f\n", r1);
    }

    if (delta > 0) {
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);
        printf("Esta equação tem duas raízes reais: %f %f\n", r1, r2);
    }

    return 0;
}