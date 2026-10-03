#include <stdio.h>
#include <math.h>
int main() {
    float hx = 0.6, hy = 0.7;
    float x0 = 0.0, x1 = 1.0;
    float y0 = 1.0, y1 = 2.0;
        for (float xn = x0; xn <= x1; xn += hx) {
            for (float yn = y0; yn <= y1; yn += hy) {
                printf ("xn = %f; yn = %f" , xn, yn);
                if ((xn + yn) <= 2){
                   float v1 = pow (fabs(cos(xn)) , yn);
                   float v2 = pow (xn + 6, 1.0/5.0);
                   if (v1 <= v2){
                      printf ("V = %f\n" , v1);
                   } else {
                           printf ("V = %f\n" , v2);
                   }   
            } else {  
                   printf ("V = %f\n" ,xn * xn + xn * yn * yn);
                }
             }
          }
          return 0;
}
