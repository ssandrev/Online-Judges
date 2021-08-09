//10341 - Solve It

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

#define EPSILON 0.0000001

int p, q, r, s, t, u;


double funcao(double x);
double funcaoDerivada(double x);
void newtonRaphson(double x);

int main() {

	while(scanf("%d %d %d %d %d %d", &p, &q, &r, &s, &t, &u) != EOF){
	if (funcao(0) * funcao(1) > 0) printf("No solution\n");
	
    else newtonRaphson(1);
	}
	return 0;
}


double funcao(double x)
{
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}
 
double funcaoDerivada(double x)
{
    return -p*exp(-x) + q*cos(x) - r*sin(x) + s/(cos(x)*cos(x)) + 2*t*x;
}
 

void newtonRaphson(double x)
{
    double h = funcao(x) / funcaoDerivada(x);
    if (funcao(0) == 0){
    	x = 0;
    	printf("%.4lf\n",x);
    	return;
    }
    while (abs(h) >= EPSILON)
    {
        h = funcao(x)/funcaoDerivada(x);
  
        x = x - h;
    }
	printf("%.4lf\n", x);
}