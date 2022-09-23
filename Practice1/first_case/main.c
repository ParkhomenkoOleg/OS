#include <stdio.h> 
#include <math.h>

void f(float x){
	float result = 0;
	result = exp(-fabs(x)) * sin(x);

}

void g(float x){
	float result = 0;
	result = exp(-fabs(x)) * cos(x);
}

int main(){
	float x;
	printf("Input x: ");
	scanf("%f", &x);
	f(x);
	g(x);
	return 0;
}
