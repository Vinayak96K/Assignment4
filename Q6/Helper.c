#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DigitX
//  Description: Accepts one number and returns occurrences of 0 in the number.
//  Input: LONG[IN]
//  Output: UINT[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

UINT DigitX(LONG lNo)
{
    UINT iCnt=0;
    UINT iDigit=0;

    if(lNo<0)
    {
        lNo=-lNo;
    }

    while(lNo!=0)
    {
        iDigit=lNo%10;
        if(iDigit==0)
        {
            iCnt++;
        }
        lNo=lNo/10;
    }
    return iCnt;

}