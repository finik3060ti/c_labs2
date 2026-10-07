#include <stdio.h>
#include <stdint.h>

int main(void) {
    printf("INT8: size=%d, min=%d, max=%d, values=%lld\n",
           (int)sizeof(int8_t), INT8_MIN, INT8_MAX,
           (long long)INT8_MAX - (long long)INT8_MIN + 1LL);

    printf("UINT8: size=%d, min=%u, max=%u, values=%llu\n",
           (int)sizeof(uint8_t), 0, UINT8_MAX,
           (unsigned long long)UINT8_MAX + 1ULL);

    printf("INT16: size=%d, min=%d, max=%d, values=%lld\n",
           (int)sizeof(int16_t), INT16_MIN, INT16_MAX,
           (long long)INT16_MAX - (long long)INT16_MIN + 1LL);

    printf("UINT16: size=%d, min=%u, max=%u, values=%llu\n",
           (int)sizeof(uint16_t), 0, UINT16_MAX,
           (unsigned long long)UINT16_MAX + 1ULL);

    printf("INT32: size=%d, min=%d, max=%d, values=%lld\n",
           (int)sizeof(int32_t), INT32_MIN, INT32_MAX,
           (long long)INT32_MAX - (long long)INT32_MIN + 1LL);

    printf("UINT32: size=%d, min=%u, max=%u, values=%llu\n",
           (int)sizeof(uint32_t), 0, UINT32_MAX,
           (unsigned long long)UINT32_MAX + 1ULL);

    return 0;
}