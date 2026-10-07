#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int val1, val2;
    scanf("%d %d", &val1, &val2);

    bool module_ready = val1;
    bool fault_state = val2;

    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state);
    printf("BOOL_SIZE: %u\n", (unsigned int)sizeof(bool));
    printf("FLAGS_SUM: %d\n", module_ready + fault_state);

    return 0;
}