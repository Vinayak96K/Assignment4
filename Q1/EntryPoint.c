#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    LONG lValue=0;
    UINT iRet=0;

    printf("Enter a positive integer number:");
    scanf("%ld",&lValue);

    iRet= MultDigit(lValue);

    printf("Multiplication of all digits into %ld: %d\n",lValue,iRet);

    return 0;
}