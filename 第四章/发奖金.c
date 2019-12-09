#include <stdio.h>

int main()
{
	double I,M;
	scanf("%lf",&I);
	if(I<=(1e+5)) M=I*0.1;
	else if(I>(1e+5)&&I<=(2e+5)) M=0.1*(1e+5)+(I-(1e+5))*0.075;
	else if(I>(2e+5)&&I<=(4e+5)) M=0.1*(2e+5)+(I-(2e+5))*0.05;
	else if(I>(4e+5)&&I<=(6e+5)) M=0.1*(4e+5)+(I-(4e+5))*0.03;
	else if(I>(6e+5)&&I<=(1e+6)) M=0.1*(6e+5)+(I-(6e+5))*0.015;
	else if(I>(1e+6)) M=0.1*(1e+6)+(I-(1e+6))*0.015;
	printf("%10.2f",M);
	return 0;
}
