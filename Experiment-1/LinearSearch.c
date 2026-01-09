#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    // Reading size of the array
    scanf("%d", &n);

    int a[n];
    // Reading array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Reading the search key
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("found at position %d\n", i);
            found = 1;
            break; 
        }
    }

    if (found == 0) {
        printf("%d not found\n", key);
    }

    return 0;
}
