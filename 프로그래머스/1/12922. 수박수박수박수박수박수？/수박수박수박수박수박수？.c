#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    char* answer = (char*)malloc((sizeof(char) * 3) * n + 1);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sprintf(answer + i * 3, "수");
        }
        else {
            sprintf(answer + i * 3, "박");
        }
    }

    return answer;
}