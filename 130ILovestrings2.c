#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t); // Number of test cases

    while (t--)
    {
        char a[51], b[51];    // Max size of strings is 50, so we need arrays of size 51 to hold null-terminator
        scanf("%s %s", a, b); // Input two strings

        int lenA = strlen(a);
        int lenB = strlen(b);
        int i = 0, j = 0;

        // Create a result array, large enough to hold both strings
        char result[101]; // Max combined length of both strings is 100

        int k = 0; // Index for result array

        // Alternate between the two strings
        while (i < lenA && j < lenB)
        {
            result[k++] = a[i++];
            result[k++] = b[j++];
        }

        // If string a still has characters left, append them
        while (i < lenA)
        {
            result[k++] = a[i++];
        }

        // If string b still has characters left, append them
        while (j < lenB)
        {
            result[k++] = b[j++];
        }

        result[k] = '\0'; // Null-terminate the result string

        printf("%s\n", result);
    }

    return 0;
}
