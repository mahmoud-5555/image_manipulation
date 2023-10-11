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

/*testing*/

// int main (void)
// {

//     unsigned int  image[256][256];

//     unsigned int  result[256][256];

//     for (int i = 0; i < 256 ;i++)
//     {
//         for (int j = 0; j < 256 ;j++)
//         {
//             image[i][j] = (i * j) % 255;
//         }
//     }
//     for (int i = 0; i < 256 ;i++)
//     {
//         for (int j = 0; j < 256 ;j++)
//         {
//            cout << result[i][j] <<' ' ;
//             if(j == 255)
//                 cout << '\n'; 
//         }
//     }

//     Invert(image , result);

//     for (int i = 0; i < 256 ;i++)
//     {
//         for (int j = 0; j < 256 ;j++)
//         {
//            cout << result[i][j] <<' ' ;
//             if(j == 255)
//                 cout << '\n'; 
//         }
//     }

// }