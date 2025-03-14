#include <stdio.h>
#include <string.h>

#define MAX_SUBSTR 1000  // Maximum substrings to store

// Function to check if a substring is unique
int isUnique(char substr[][100], int count, char temp[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(substr[i], temp) == 0) {
            return 0;  // Not unique
        }
    }
    return 1;  // Unique
}

// Function to count distinct substrings
int countDistinctSubstrings(char str[]) {
    int len = strlen(str);
    char substr[MAX_SUBSTR][100];  // 2D array to store substrings
    int count = 0;

    for (int start = 0; start < len; start++) {
        for (int end = start; end < len; end++) {
            int index = 0;
            char temp[100];

            // Extract substring from start to end
            for (int k = start; k <= end; k++) {
                temp[index++] = str[k];
            }
            temp[index] = '\0';  // Null terminate

            // Check uniqueness and store if unique
            if (isUnique(substr, count, temp)) {
                strcpy(substr[count++], temp);
            }
        }
    }
    return count;
}

int main() {
    char str[100];
    fgets(str,100,stdin);
    int distinctCount = countDistinctSubstrings(str);
    printf("%d\n", distinctCount);
    return 0;
}
