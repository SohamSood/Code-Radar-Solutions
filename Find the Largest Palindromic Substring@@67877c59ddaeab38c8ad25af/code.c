#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int pallindrome(char *myarr) {
    int a = strlen(myarr);
    char myarr2[a];
    for(int i = 0;i<a;i++) {
        myarr2[i] = myarr[a-1-i];
    }
    if ((strcmp(myarr,myarr2)) == 0) {
        return 1;
    } else {
        return 0;
    }
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

    // Print the longest palindrome
    printf("Longest Palindromic Substring: ");
    for (int i = startIdx; i < startIdx + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int a = strlen(myarr);
    longestPalindromicSubstring(myarr);
}