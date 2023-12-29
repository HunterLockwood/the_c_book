// header files contain code for other code to access

#include <stdio.h>

/*
  comments & other 
  syntactic devices 
  feel familiar 
*/

// this is a bit of old school syntax, apparently; the compiler would be happier with `int main()`
main() {

  // this program converts fahrenheit to celsius, for obvious reasons, and prints the output to the console.
  //int fahrenheit;
  float fahrenheit;
  //int celsius;
  float celsius;

  // set the upper & lower bounds; you can string these together, neat!
  //int lower, upper;
  float lower, upper;
  //int step;
  float step;

  lower = -40;
  upper = 120;
  step = 8;

  fahrenheit = lower;
  
  printf("Fahrenheit (bad)\tCelsius (useful)\n");
  
  while (fahrenheit <= upper) {
    //celsius = 5 * (fahrenheit - 32) / 9;
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("%3.0f\t\t\t%6.1f\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + step;
  }
}
