#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float a[5][2];
    float b[2][5];
    float res[5][5];
    int index = 1;


    for (int i = 0; i < 5; i++) {
	for (int j = 0; j < 2; i++) {
	    a[i][j] = atof(argv[index++]);
	}
    }

    for (int i = 0; i < 2; i++) {
	for (int j = 0; j < 5; j++) {
	    b[i][j] = atof(argv[index++]);
	}
    }

    for (int i = 0; i < 5; i++) {
	for (int j = 0; j < 5; j++) {
            res[i][j] = 0;
	    for (int k = 0; k < 2; k++) {
		res[i][j] += a[i][k] * b[k][j];
	    }
	}
    }


    for (int i = 0; i < 5; i++) {
   	for (int j = 0; j < 5; j++) {
  	    printf("%f ", res[i][j]);
	}
    }
    return 0;
}
