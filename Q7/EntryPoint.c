#include"MyHeader.h"

int main(int argc, char const *argv[])
{

    LONG lValue=0;
    UINT iRet=0;

    printf("Enter a positive integer number:");
    scanf("%ld",&lValue);

    iRet=DigitCountX(lValue);

    printf("Number of digits greater than or euqal to 5 in %ld: %d\n",lValue,iRet);

    return 0;
}
