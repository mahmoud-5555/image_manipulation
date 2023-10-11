#include "main.h"
using namespace std;

/**
 * Invert - this function deel with the globul var (image) 
 * the function make inveart to the color
 * 
 * Return : no return value
 * 
*/

void Invert(void)
{
    for (int i = 0; i < 256; i++)
    { 
        for (int j = 0; j < 256; j++)
        {
            image[i][j] = 255 - image[i][j] ;
        }

    }

}

