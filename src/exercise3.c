#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float a[10];
    int k = atoi(argv[11]);

    for (int i = 0; i <= 10; i++) {
	a[i] = atof(argv[i+1]);
    }

    for (int i = 0; i <= 10; i++) {
	printf("%f", a[(i+k)%10]);
    }
    return 0;
}
