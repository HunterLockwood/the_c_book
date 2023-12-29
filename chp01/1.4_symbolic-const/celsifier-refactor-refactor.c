// symbolic constants (symbolic names)
// replace things with other things

#include <stdio.h>

#define LOWER -40
#define UPPER 180
#define STEP 8

int main() {
  int fahrenheit;
  printf("FAHRENHEIT (bad) \t CELSIUS (good)");
  for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
    printf("%3d \t\t\t %6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit-32));
}
