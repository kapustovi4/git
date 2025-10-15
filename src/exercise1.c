#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double a[10];
    for (int i = 0; i <= 9; i++) {
        scanf("%lf",&a[i]);
    }

    float sum = 0;
    for (int i = 0; i <= 9; i++) {
	sum += a[i];
    }
    printf("%lf", sum/10);

    return 0;
}
