/*
#ifdef: Checks if a macro is defined.
#ifndef: Checks if a macro is not defined.
#if: Allows for conditional compilation based on an expression.
#else: Specifies the alternative code to be compiled if the condition in the #if directive is false.
#endif: Marks the end of a conditional compilation block.
*/
#include <stdio.h>

// Define a macro
#define DEBUG_ENABLED
#define Console

int main() {
  
  // Conditional compilation directives
  #ifdef DEBUG_ENABLED
    printf("Debugging is enabled\n");
  #elif defined(DEBUG_DISABLED)
    printf("Debugging is disabled\n");
  #else 
    printf("Run mode\n");
  #endif

  // Check if macro is defined
  #ifndef Console
    printf("Hello\n");
  #endif

  // Conditional compilation using if-else
  #if 0
    printf("This won't be included\n");
  #else
    printf("This will be included\n");
  #endif

  // Conditional compilation using if-else based on value
  #define VALUE 5
  #if VALUE > 10
    printf("VALUE is greater than 10\n");
  #elif VALUE > 5
    printf("VALUE is greater than 5\n");
  #else
    printf("VALUE is 5 or less\n");
  #endif

  return 0;
}
