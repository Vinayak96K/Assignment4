#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Reverse
//  Description: Accepts one number and returns the it into reverse format.
//  Input: LONG[IN]
//  Output: LONG[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////

LONG Reverse(LONG lNo)
{
    UINT iDigit=0;
    LONG iRev=0;

    if(lNo<0)
    {
        lNo=-lNo;
    }

    while(lNo!=0)
    {
        iDigit=lNo%10;
        iRev=(iRev+iDigit)*10;                   //According to BODMAS Rule.
        lNo=lNo/10;
    }
    iRev=iRev/10;
    return iRev;

}