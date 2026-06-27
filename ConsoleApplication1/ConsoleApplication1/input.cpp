#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
Random::Random() {
    static bool is_seeded = false;
    if (!is_seeded) {
        srand((unsigned int)time(NULL));
        is_seeded = true;
    }
    int numbers[10];
    for (int i = 0; i < 10; i++) {
        numbers[i] = i;
    }
    for (int i = 9; i > 0; i--) {
        int j = rand() % (i + 1); 
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    
    answer1 = numbers[0];
    answer2 = numbers[1];
    answer3 = numbers[2];
    answer4 = numbers[3];
}

void Input::number() {
    printf("4桁の数字を入力してください（スペース区切り）: ");
    scanf_s("%d %d %d %d", &input1, &input2, &input3, &input4);
}