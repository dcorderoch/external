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
        printf("variable is not empty!\n");
        printf("variable is: %d\n", variable);
    }
    else
    {
        printf("variable is empty!\n");
    }

    return 0;
}
