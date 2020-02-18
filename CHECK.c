#include <stdio.h>
#include <math.h>

#define NT 20

void gauss_lobatto_points(double*, int);

int main(void){
   double xi[(NT+1)];
   double y;
   int i;
   gauss_lobatto_points(xi, NT);
   for(i=0; i<=NT; i++){
      y = sin(M_PI/NT*i);
      printf("%lf %lf\n", xi[i], y);
   }
   return(0);
}
