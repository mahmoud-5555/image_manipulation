#include <iostream>
using namespace std;
/**
 * Invert -  filter that Invert the color
 * @imge : is the data of the image that stord in unsiged int matrics
 * 
 * Return: void no return
 * 
 * 
*/

void Invert(unsigned char image [256][256],unsigned char res[256][256])
{
    for (int i = 0; i < 256;i++)
    { 
        for (int j = 0; j < 256;j++)
        {
            res [i][j] = 255 - image[i][j] ;
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