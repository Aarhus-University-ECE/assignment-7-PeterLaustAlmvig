#include "taylor_sine.h"

double factorial(int n){
    if(n <= 1){
        return 1;
    }
    else
    return (n*factorial(n-1));
}

double taylor_sine(double x, int n){
    /* implement your function here */
    double sine = x;
    double xx = x*x;
    double nume = x; //Numerator
    double denom = 1; //Denominator
    int counter = 1;
    for(int i = 1; i<=n; i++){
        counter += 2;
        nume = xx*nume;
        denom = factorial(counter);
        if(i % 2 == 1){
            sine -= nume/denom;
        }
        else if(i % 2 == 0){
            sine += nume/denom;
        }
        }

    return sine;
}
