#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strcomp( char *a, char *b) {
    return strcmp(a, b);
}

int main() {
    char *a, *b, *c;
    int size = 80;


    a = (char *)malloc(size * sizeof(char));
    b = (char *)malloc(size * sizeof(char));

    printf("�п�J�r��a�]�̦h%d�Ӧr���^�G", size);
    scanf("%s", a);
    printf("�п�J�r��b�]�̦h%d�Ӧr���^�G", size);
    scanf("%s", b);


    int result = strcomp(a, b);
    if (result > 0) {
        c = a;
    } else {
        c = b;
    }

    printf("���j���r�ꬰ�G%s\n", c);
 
}

