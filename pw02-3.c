#include <stdio.h>

int main(void) {

    int dec = 10;
    int oct = 010;
    int hex = 0x10;

    printf("DEC_10: %d\n", dec);
    printf("OCT_10: %d\n", oct);
    printf("HEX_10: %d\n", hex);

    printf("INT_SUFFIX: %d %d %d %d\n", 
            (int)sizeof(10), (int)sizeof(10u), (int)sizeof(10LL), (int)sizeof(10ULL));
    
    printf("FLOAT_SUFFIX: %d %d %d\n", 
            (int)sizeof(0.1f), (int)sizeof(0.1), (int)sizeof(0.1L));

    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);

    char ch = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %d %d %d\n", 
            (int)sizeof('A'), (int)sizeof(ch), (int)sizeof("A"));

    return 0;
}