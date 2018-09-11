#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    UINT iRet=0;
    LONG lValue=0;

    printf("Enter a positive integer number:");
    scanf("%ld",&lValue);

    iRet=EvenDigit(lValue);

    printf("Addition of all even numbers in %ld: %d\n",lValue,iRet);

    return 0;
}
