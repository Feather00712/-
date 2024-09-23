#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc,char *argv[] )
{
    //告知用户使用规则
    printf("AA");
    //对用户输入进行检查
      //步骤一
    int a = argc;
    bool if_ok1 = true;

    if(a != 4 && a!= 5 )
    {
        printf("Correct usage : AA");
        return;
    }
    else if(a == 4)
    {
        printf("Correct usage : AA");
        return;
    }
    else if (a == 5)
    {
        //检查是否是字母A~E
        if (argv[1] < 65 || argv[1] > 69)
        {
            printf("Correct usage : AA");
            return;
        }
        else
        {
            for (int i = 2; i < a; i++)
            {
                //检查是否是整数
                if(scanf("%d", &argv[i]) != 1)
                {
                    if_ok1 = false;
                    printf("Correct Usage :");
                    return;
                }
            }         
        }
    }

        //进一步检查输入，步骤二
    bool if_store = false;
    bool if_buy = false;
    //检查输入的是上货还是买货
    if (if_ok1 == true)
    {
        if(argc == 5)
        {
            if(argv[2] <= 0 || argv[2] >= 5)
        {
            printf("correct:");
            return;
        }
        else if(argv[3] <=0 || argv[3] >= 11)
        {
            printf("correct:");
            return;
        }
        else if(argv[4] <= 0 || argv[4] >= 51)
        {
            printf("correct:");
            return;
        }
        else
        if_store == true;
        }
        else if(argc == 4)
        {
            if(argv[2] <= 0 || argv[2] >= 6)
            {
                printf("correct: ");
                return;
            }
            else if(argv[3] <= 0 || argv[3] > 50)
            {
                printf("correct: ");
                return;
            }
            else
            if_buy = true;
        }
    }

    //储存用户第一次输入
    int lim = 50;

    if(if_store == true)
    {

    }

}
