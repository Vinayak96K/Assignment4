#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DigitCountX
//  Description: Accepts one number and returns the count of digit greater than or equal to 5.
//  Input: LONG[IN]
//  Output: UINT[OUT]
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////

UINT DigitCountX(LONG lNo)
{
    UINT iCnt=0,iDigit=0;

    if(lNo<0)
    {
        lNo=-lNo;
    }

    while(lNo!=0)
    {
        iDigit=lNo%10;

        if(iDigit>=5)
        {
            iCnt++;
        }
        lNo=lNo/10;
    }
    
    return iCnt;
}