#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 2)
        return 0;

    FILE* fp = fopen(argv[1], "r");

    int c;
    int a[26] = {0};
    while((c = fgetc(fp)) != EOF) {
        int i = c - 'a';
        a[i]++;
    }
    for(int i=0; i<26; i++) {
        printf("%c: %d\n", i+'a', a[i]);
    }

    fclose(fp);
}

