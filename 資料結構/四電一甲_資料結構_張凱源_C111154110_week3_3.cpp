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

    printf("請輸入字串a（最多%d個字元）：", size);
    scanf("%s", a);
    printf("請輸入字串b（最多%d個字元）：", size);
    scanf("%s", b);


    int result = strcomp(a, b);
    if (result > 0) {
        c = a;
    } else {
        c = b;
    }

    printf("較大的字串為：%s\n", c);
 
}

