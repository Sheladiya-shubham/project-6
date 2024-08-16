#include <stdio.h>

 main() {
    char str[100];
    int frequency[256] = {0}; 
    int start, end, length = 0, flag = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        frequency[(int)str[length]]++;
        length++;
    }

    start = 0;
    end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag == 1) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }

    printf("Frequency of each letter:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("%c => %d\n", i, frequency[i]);
        }
    }

}
