/**
 * Variable declarations and definitions and initialisation
 */

#include <stdio.h>

int definedVariableGlobal;

int initialisedVariableGlobal = 89430;

static int staticVariableGlobal;

int main() {
  int definedVariableLocal;

  static int staticVariableLocal;

  int *ptrToHeapMemory;

  ptrToHeapMemory = malloc(sizeof(int));
}