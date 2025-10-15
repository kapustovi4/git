#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float a[10][3];
    float b[3][10];
    float r[10][10];

    for (int i = 0; i < 10; i++) {
	for (int j = 0; j < 3; i++) {
	    scanf("%f", &a[i][j]);
	}
    }

    for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 10; j++) {
	    scanf("%f", &b[i][j]);
	}
    }

    for (int i = 0; i < 10; i++) {
	for (int j = 0; j < 10; j++) {
            r[i][j] = 0;
	    for (int k = 0; k < 3; k++) {
		r[i][j] += a[i][j] * b[i][j];
	    }
	}
    }


    for (int i = 0; i < 10; i++) {
   	for (int j = 0; j < 10; j++) {
  	    printf("%.2f ", r[i][j]);
	}
    }
    return 0;
}
