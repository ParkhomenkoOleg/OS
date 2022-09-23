#include <stdio.h> 
#include "f.h"
#include "g.h"

void f(float x);
void g(float x);

int main() {
	float x;
	printf("Input x: ");
	scanf("%f", &x);
	f(x);
	g(x);
    return 0;
}
