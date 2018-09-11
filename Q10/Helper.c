#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DiffDigit
//  Description: Accepts one number and retruns the difference between the summation of even digits and odd digits from the number.
//  Input: LONG[IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DiffDigit(LONG lNo)
{
    UINT iOddDigitSum=0, iEvenDigitSum=0;
    UINT iDigit=0;
    int iDiff=0;

    if(lNo<0)
    {
        lNo=-lNo;
    }   

    while(lNo!=0)
    {
        iDigit=lNo%10;
        if(iDigit%2==0)
        {
            iEvenDigitSum = iEvenDigitSum + iDigit;
        }
        else
        {
            iOddDigitSum = iOddDigitSum +iDigit;
        }
        lNo=lNo/10;
    }
    iDiff=iEvenDigitSum - iOddDigitSum;
    return iDiff;
}