#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: EvenDigit
//  Description: Accepts one number and returns the aaddition of all the even digits from the number.
//  Input: LONG[IN]
//  Output: UINT[OUT]
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////////

UINT EvenDigit(LONG lNo)
{
    UINT iSum=0;
    UINT iDigit=0;

    if(lNo<0)
    {
        lNo=-lNo;
    }

    while(lNo!=0)
    {
        iDigit=lNo%10;
        if(iDigit%2==0)
        {
            iSum=iSum+iDigit;
        }
        lNo=lNo/10;
    }
    return iSum;
}