int myAtoi(char* s) {
    long rem = 0;  // Use long to detect overflow before returning int
    int sign = 1;  // Default is positive
     
    // Skip leading spaces
    while (*s == ' ') s++;

    // Check for sign
    if (*s == '-' || *s == '+') {
        if (*s == '-') sign = -1;
        s++;  // Move to next character
    }

    // Convert characters to integer
    while (isdigit(*s)) {
        int digit = *s - '0';

        // Check for overflow before updating rem
        if (rem > (INT_MAX / 10) || (rem == INT_MAX / 10 && digit > 7)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        rem = rem * 10 + digit;
        s++;
    }

    return (int)(rem * sign);
}
