int strStr(char* haystack, char* needle) {
    int needlelen = strlen(needle);
    int haystacklen = strlen(haystack);

    if (needlelen == 0) return 0;  

    for (int i = 0; i <= haystacklen - needlelen; i++) {
        int found = 1; 
        for (int j = 0; j < needlelen; j++) {
            if (haystack[i + j] != needle[j]) {
                found = 0; 
                break;
            }
        }
        if (found) return i; 
    }

    return -1; 
}