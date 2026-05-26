#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    int sum = 0;
    int n;
    int res;
    char str[64];
    while ((res = fscanf(fp, "%d", &n)) != EOF) {
        if (res != 1) {
            fscanf(fp, "%s\n", str);
            printf("invalid input %s\n", str);
        } 
        else { sum += n; }
    }
    
    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
