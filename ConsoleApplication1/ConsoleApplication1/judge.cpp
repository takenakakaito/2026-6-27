#include<stdio.h>
#include <stdbool.h>
bool judge(int answer1, int answer2, int answer3, int answer4, int input1, int input2, int input3, int input4)
{
    int hit = 0;
    int blow = 0;
    bool isLoop = false;
    if (answer1 == input4&&answer2==input3&&answer3==input2&&answer4==input1)
    {
        printf("ƒQ[ƒ€ƒNƒŠƒA");
        isLoop = true;
    }
    if(answer1==input4)
    {
        hit++;
	}
    if(answer2==input3)
    {
        hit++;
    }
    if(answer3==input2)
    {
        hit++;
    }
    if(answer4==input1)
    {
        hit++;
	}
    if (input1==answer1||input1==answer2||input1==answer3)
    {
		blow++;
        if (answer4== input1)
        {
            blow--;
        }
    }
    if (input2 == answer1 || input2 == answer2 || input2 == answer4)
	{
        blow++;
        if (answer3 == input2)
        {
            blow--;
        }
    }
    if (input3 == answer1 || input3 == answer4 || input3 == answer3)
    {
        blow++;
        if (answer2 == input3)
        {
            blow--;
        }
    }
    if (input4 == answer4 || input4 == answer2 || input4 == answer3)
    {
        blow++;
        if (answer1 == input4)
        {
            blow--;
        }
	}
	printf("blow:%d\n", blow);
	printf("hit:%d\n", hit);
	blow = 0;
	hit = 0;
    return isLoop;
}