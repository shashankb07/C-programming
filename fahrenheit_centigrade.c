#include<stdio.h>
#include<conio.h>
This is integer version where the resuts are not accurate
int main()
{   
    int cel, feh; 
    int lower = 0; int upper = 300; int step = 20;
    feh = lower;
    printf("fehrenite \tcelcius\n");
    while (feh <= upper)
    {   
            cel =  5 *(feh -32) /9;
            
            printf("%4d \t \t%d\n", feh, cel);
            feh = feh +step;
    }
    
}


// *************************************************************************** //
#include<stdio.h>
#include<conio.h>
int main()
//****This is flaoting point  version where the resuts are accurate****
{   
    float cel, feh; 
    int lower = 0; int upper = 300; int step = 20;
    feh = lower;
    printf("fehrenite \tcelcius\n");
    while (feh <= upper)
    {   
            cel =  5 *(feh -32) /9;
            
            printf("%4.0f \t \t%6.1f\n", feh, cel);
            feh = feh +step;
    }
    
}
// ********************************************************************* //

#include<stdio.h>
#include<conio.h>
int main()
//This is to revert ferhenite and celcius
{   
    float cel, feh; 
    int lower = 0; int upper = 300; int step = 20;
    feh = lower;
    printf("celcius \t fehrenhite\n");
    while (feh <= upper)
    {   
            cel =  5 *(feh -32) /9;
            
            printf("%4.1f \t \t%6.0f\n", cel, feh);
            feh = feh +step;
    }
    
}