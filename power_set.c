#include <stdio.h>

void printPowerSet(char set[], int n, int index, char current[], int currIndex) {
    
    // Base case: if index reaches end of set
    if (index == n) {
        printf("{ ");
        for (int i = 0; i < currIndex; i++) {
            printf("%c ", current[i]);
        }
        printf("}\n");
        return;
    }

    // Exclude current element
    printPowerSet(set, n, index + 1, current, currIndex);

    // Include current element
    current[currIndex] = set[index];
    printPowerSet(set, n, index + 1, current, currIndex + 1);
}

int main() {
    char set[] = {'a', 'b', 'c'};
    int n = sizeof(set) / sizeof(set[0]);

    char current[n];   // Temporary array to store subset
    
    printf("Power Set:\n");
    printPowerSet(set, n, 0, current, 0);

    return 0;
}