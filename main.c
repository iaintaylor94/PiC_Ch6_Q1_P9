/* Program to evaluate simple expressions of the form <value> <operator> <value> */

#include <stdio.h>

int main(void) {
  float val1, val2;
  char op;

  printf ("Type in your expression: ");
  scanf ("%f %c %f", &val1, &op, &val2);

  switch (op) {
    case '+':
      printf ("%.2f \n", val1 + val2);
      break;

    case '-':
      printf ("%.2f", val1 - val2);
      break;

    case '*':
      printf ("%.2f", val1 * val2);
      break;

    case '/':
      if (val2 == 0) {
        printf ("Division by zero\n");
      }
      else {
        printf ("%.2f", val1 / val2);
      }
      break;

    default:
      printf ("Unknown operator.\n");
      break;  
  }
  
  return 0;
}