#include <stdio.h>

int main() {
  int fahrenheit;
  for (
    fahrenheit = -40;
    fahrenheit <= 180;
    fahrenheit = fahrenheit + 4
  )
    printf("%3d %6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit-32));
}
