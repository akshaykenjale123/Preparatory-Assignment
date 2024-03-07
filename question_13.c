#include <stdio.h>
#include <string.h>

int main() {
    const char* strings[] = {"a", "o", "b", "a", "g", "b","g"};
    int size = sizeof(strings) / sizeof(strings[0]);

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("Duplicate: %s\n", strings[i]);
                break;  // Avoid printing the same duplicate multiple times
            }
        }
    }

    return 0;
}