#ifndef CALC_H
#define CALC_H

#include "function_pointers.h"

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associate
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif/*CALC_H*/
