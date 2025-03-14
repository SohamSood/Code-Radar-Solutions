#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int pallindrome(char *myarr) {
    int a = strlen(myarr);
    char myarr2[a + 1];  // +1 for null terminator

    for (int i = 0; i < a; i++) {
        myarr2[i] = myarr[a - 1 - i];  // Reverse the string
    }
    myarr2[a] = '\0';  // Null-terminate the reversed string

    return strcmp(myarr, myarr2) == 0;  // Return 1 if palindrome, else 0
}

void longestPalindromicSubstring(char *str) {
    int a = strlen(str);
    int maxLen = 0, startIdx = 0;
    char temp[100];  // Temporary substring storage

    // Generate all substrings
    for (int i = 0; i < a; i++) {
        for (int j = i; j < a; j++) {
            int index = 0;

            // Extract substring
            for (int k = i; k <= j; k++) {
                temp[index++] = str[k];
            }
            temp[index] = '\0';  // Null-terminate substring

            // Check if it's a palindrome using your function
            if (pallindrome(temp)) {
                int curLen = j - i + 1;
                if (curLen > maxLen) {
                    maxLen = curLen;
                    startIdx = i;
                }
            }
        }
    }
    for (int i = startIdx; i < startIdx + maxLen; i++) {
        printf("%c", str[i]);
    }
}
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int a = strlen(myarr);
    longestPalindromicSubstring(myarr);
}