#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//these two are defined in another file
extern int variable;
extern void initVariables();

int main()
{
    initVariables();
    bool val = 0;

    val = val | variable;

    if(val)
    {
        printf("cosa is not empty!\n");
        printf("cosa is: %d\n", variable);
    }
    else
    {
        printf("cosa is empty!\n");
    }

    return 0;
}
