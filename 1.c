#include <stdio.h>
#include <math.h> 
int main() {
    float hx = 1.3, ha = 1.3;
    float x0 = 1.0, x1 = 3.0;
    float a0 = 2.0, a1 = 4.0;
        for (float xn = x0; xn <= x1; xn += hx) {
            for (float an = a0; an <= a1; an += ha) { 
                printf("xn = %f; an = %f\n" , xn, an);
                float Z(float x, float a) {
                       float f1 = sqrt((a - x) / x);
                       float f2 = cos((a * a) / x);
                       float f3 = cos(((x * cbrt(a)) / (a + 2.5)))/sin(((x * cbrt(a))/(a + 2.5)));
                       if (f1 <= f2 <= f3) {
                           printf ("Z = %f\n", f1);
                       } else {
                       if (f1 <= f2 <= f3) {
                           printf ("Z = %f\n", f2);
                      }
                    else { 
                       printf ("Z = %f\n", f3);
                   }
                }
             }
          }
       }
	return 0;
}
