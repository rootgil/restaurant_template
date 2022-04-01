#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, cpt = 0,sum = 1;
    /*for (i=2; i<100;i++)
    {
        cpt = 0;
        for (j = 2; j < i; j++)
        {
            if(i%j==0){
            cpt = 1;
            break;
            }
        }
        if(cpt==0){
            sum =sum + i;
        }
    }
    printf("%d", sum);*/
    for (i = 0; i < 98;i++){
        sum *= 2;
    }
    printf("%lf", (double)100 / sum);

    return 0;
}