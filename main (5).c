#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    
    int first = 0; 
    
    printf("Substrings: ");
    
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            
            if (first == 1) {
                printf(",");
            }
            first = 1; 
            
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }
    printf("\n");
    
    return 0;
}