#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float a[10];
    int k = atof(argv[11]);
    float x = atoi(argv[12]);

    for (int i = 0; i <= 9; i++) {
	scanf("%f", &a[i]);
    }

    for (int i = 0; i <= 9; i++) {
	if (k == i) {
	    a[k] = x;
	    printf("%.2f ", a[k]);
        } else {
	    printf("%.2f ", a[i]);
	}
    }
    return 0;
}
