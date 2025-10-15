#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    float a[10];
    for (int i = 0; i <= 9; i++) {
        a[i] = atof(argv[i+1]);
    }

    for (int i = 9; i >= 0; i--) {
	printf("%f", a[i]);
    }
    return 0;
}
