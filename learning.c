#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4};

    printf("배열의 시작 주소: %p\n", (void*)array);
    printf("첫 번째 값: %d\n", array[0]); 


    getchar();
    return 0;
}