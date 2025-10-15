#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double a[10];
    for (int i = 0; i <= 9; i++) {
    a[i] = atof(argv[i+1]);
    }

    float sum = 0;
    for (int i = 0; i <= 9; i++) {
	sum += a[i];
    }
    printf("%.2lf", sum/10);

    return 0;
}
