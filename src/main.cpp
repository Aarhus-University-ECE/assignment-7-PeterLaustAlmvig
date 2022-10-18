#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "taylor_sine.c"

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    for(int i = 0; i <= 30; i+=2){
        double t_sine = taylor_sine(i, 5);
        double m_sine = sin(i);
        printf("%d) Taylor sine: %f\tm_sine; %f\n", i, t_sine, m_sine);
    }
    printf("Higher precision:\n");
    for(int i = 0; i <= 30; i+=2){
        double t_sine = taylor_sine(i, 20);
        double m_sine = sin(i);
        printf("%d) Taylor sine: %.10f\tm_sine; %.10f\n", i, t_sine, m_sine);
    }
    /*The tests show that the taylor sine function works better for lower numbers and the higher
    the number the more precision is needed. In the first loop I see that the function remains accurate
    only until i=4.
    Once I increase the precision to 20 the function remains accurate until i=16.
    */
    return 0;
}