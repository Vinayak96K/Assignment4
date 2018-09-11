#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    LONG lValue=0;

    printf("Enter a positive integer number:");
    scanf("%ld",&lValue);

    DisplayNo(lValue);

    return 0;
}
