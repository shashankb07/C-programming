// #include<stdio.h>
// #include<conio.h>
// DESCRIPTION : temperature conversion program using FOR loop 
// int main()
// {
//     int farh;

//     for (farh = 0; farh <= 300; farh = farh +20)
//     {   
//         float cel = (0.5/0.9) * (farh-32);
//         printf("%3d\t \t %4.1f \n",farh,cel );
//     }
    
// }

/****************************************************************/
// STANDARD LIBRARIES //
#include<stdio.h>
#include<conio.h>
// symbolic constants //
#define LOWER 0 
#define UPPER 300
#define STEP 20
// DESCRIPTION : !!Temperature program using FOR loop but in descending order!! //

int main()
{
    int farh;

    for (farh = 300; farh >= LOWER; farh = farh - STEP) // for loop starts at 300 and then checks if the element is grater than 0 and then decrement by 20
    {   
        float cel = (0.5/0.9) * (farh-32);
        printf("%3d\t \t %4.1f \n",farh,cel );
    }
    
}
