#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: MultDigit
//  Description: Accepts one number and return the multiplation of all the digits in that number.
//  Input: LONG[IN]
//  Output: UINT[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////

UINT MultDigit(LONG lNo)
{
    UINT iMult=1;
    UINT iDigit=0;
    if(lNo<0)
    {
        lNo=-lNo;
    }

    while(lNo!=0)
    {
        iDigit=lNo%10;
        if(iDigit!=0)
        {
        iMult= iMult * iDigit;
        }
        lNo=lNo/10;
    }
    return iMult;
}