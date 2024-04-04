#include <stdio.h>
int main()
{
      float r1, r2, i1, i2;
      printf("Enter real and imaginary numbers for complex number 1:");
      scanf("%f%f", &r1, &i1);

      printf("Enter real and imaginary numbers for complex number 2:");
      scanf("%f%f", &r2, &i2);

      float real_sum = r1 + r2;
      float img_sum = i1 + i2;
      printf("complex number 1 is:%.1f +i %.1f\n", r1, i1);
      printf("complex number 2 is:%.1f +i %.1f\n", r2, i2);
      printf("Sum is:%.1f +i %.1f\n", real_sum, img_sum);
}