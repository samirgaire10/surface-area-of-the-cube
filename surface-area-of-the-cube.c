#include <stdio.h>

int main(void) {
  int a;
  float surface_area;

  printf("Enter the cube side: ");
  scanf("%d", &a);

  surface_area = 6 * a * a;

  printf("The surface area of the cube is %.2f cm^2 \n", surface_area);

  return 0;
}
