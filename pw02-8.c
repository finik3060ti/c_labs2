#include <stdio.h>
#include <float.h>

int main(void) {
    printf("FLOAT: size=%d, digits=%d, max=%.6e\n",
           (int)sizeof(float), FLT_DIG, FLT_MAX);

    printf("DOUBLE: size=%d, digits=%d, max=%.6e\n",
           (int)sizeof(double), DBL_DIG, DBL_MAX);

    printf("LDOUBLE: size=%d, digits=%d, max=%.6Le\n",
           (int)sizeof(long double), LDBL_DIG, LDBL_MAX);

    return 0;
}