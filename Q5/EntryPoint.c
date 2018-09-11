#include"MyHeader.h"

int main(int argc, char const *argv[])
{

    LONG lValue=0, lRet=0;

    printf("Enter a positive integer number:");
    scanf("%ld",&lValue);

    lRet=Reverse(lValue);

    printf("Reverse number of %ld: %ld\n",lValue,lRet);
        
    return 0;
}
