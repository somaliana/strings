#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[80],c1,c2;
    fgets(s, 80,stdin);
    c1 = getchar();
    c2 = getchar();

    for (int i = 0; i < strlen(s); i++) {
        if (s[i]==c1) {
            s[i+1] = c2;
        }

    }
    puts(s);
}