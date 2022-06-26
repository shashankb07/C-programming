#include<stdio.h>
//count (increment) the number of input from keyboard
int main()
{
    double nc; 
    for (nc = 0;getchar() != EOF; ++nc)
    printf("%.0f\n", nc);

}