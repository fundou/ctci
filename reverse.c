#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: %s [string]\n", argv[0]);
        exit(0);
    }
        
    char *s = (argc > 1) ? argv[1] : "reverse";
    int j = strlen(s) - 1, i = 0, t = 0;
    
    while (i < j) {
        t = s[j];
        s[j] = s[i];
        s[i] = t; 
        i++;
        j--;
    } 
    printf("%s\n", s);
} 
