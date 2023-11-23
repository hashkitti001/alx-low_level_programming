#include <stdio.h>

unsigned int binary_to_uint(const char *b) {
    if (b == NULL)
        return 0;

    unsigned int result = 0;

    // Check each character in the string
    while (*b != '\0') {
        // If the character is not '0' or '1', return 0 (invalid)
        if (*b != '0' && *b != '1')
            return 0;

        // Convert character to integer value
        int digit = *b - '0';

        // Shift the result to the left and add the current digit
        result = (result << 1) + digit;

        b++; // Move to the next character
    }
	return result;
}
