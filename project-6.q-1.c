#include <stdio.h>

 main() {
    char str[100];
    int start, end, length = 0, flag = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
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

}
