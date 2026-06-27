#include"input.h"
#include"judge.h"
#include<stdio.h>
int main()
{
    Random answer;

    bool isLoop = false;
    while (!isLoop)
    {
        Input input;
        input.number();
        isLoop = judge(answer.answer1, answer.answer2, answer.answer3, answer.answer4,
            input.input1, input.input2, input.input3, input.input4
        );
    }
    return 0;
}