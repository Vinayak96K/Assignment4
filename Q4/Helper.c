#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayNo
//  Description: Accepts one number and displays spelling of each digit occur in the number in reverse format.
//  Input: LONG[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayNo(LONG lNO)
{
    UINT iDigit=0;

    if(lNO<0)
    {
        lNO=-lNO;
    }

    while(lNO!=0)
    {
        iDigit=lNO%10;

        switch(iDigit)
        {
            case 0:
                printf("ZERO ");
                break;
            case 1:
                printf("ONE ");
                break;     
            case 2:
                printf("TWO ");
                break;       
            case 3:
                printf("THREE ");
                break;    
            case 4:
                printf("FOUR ");
                break;
            case 5:
                printf("FIVE ");
                break;
            case 6:
                printf("SIX ");
                break;
            case 7:
                printf("SEVEN ");
                break;
            case 8:
                printf("EIGHT ");
                break;
            case 9:
                printf("NINE ");
                break;
        }

        lNO=lNO/10;
    }
    printf("\n");

}