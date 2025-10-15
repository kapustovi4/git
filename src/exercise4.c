#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float a[10];
    float x = atof(argv[11]);
    int k = atoi(argv[12]);

    for (int i = 0; i <= 9; i++) {
	a[i] = atof(argv[i+1]);
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
