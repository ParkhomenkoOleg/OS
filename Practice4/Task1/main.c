#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    printf("Example -> %.lfx^2+%.lfx+%.lf\n", a, b ,c);
    double d = pow(b,2) - 4*a*c;
    printf("D = b^2-4ac = %.lf\n", d);
    if(d < 0) {
        printf("D < 0, there are no solutions\n");
    }
    else if(d == 0) {
        double x1 = (double)-b/(2*a);
        printf("D = 0, one solution -> %2.lf\n", x1);
    }
    else {
        double x1 = (double)(-b + sqrtl(d)) / (2*a);
        double x2 = (double)(-b - sqrtl(d)) / (2*a);
        printf("D > 0, two solutions -> x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    }
	return 0;
}