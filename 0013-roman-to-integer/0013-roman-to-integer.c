int expression(char c) {
    int exp = 0;  
    switch (c) {
        case 'I': exp = 1; break;
        case 'V': exp = 5; break;
        case 'X': exp = 10; break;
        case 'L': exp = 50; break;
        case 'C': exp = 100; break;
        case 'D': exp = 500; break;
        case 'M': exp = 1000; break;
    }
    return exp;
}

int romanToInt(char* s) {
    int sum = 0;
    int prev = 0;

    
    for (int i = strlen(s) - 1; i >= 0; i--) {
        int cur = expression(s[i]);

        
        if (cur < prev) {
            sum -= cur;
        } else {
            sum += cur;
        }

        prev = cur;  
    }

    return sum;
}