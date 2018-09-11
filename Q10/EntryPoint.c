#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iRet=0;
    LONG lValue=0;

    printf("Enter a positive integer number:");
    scanf("%ld",&lValue);

    iRet=DiffDigit(lValue);

    printf("Answer:%d\n",iRet);
       
    return 0;
}