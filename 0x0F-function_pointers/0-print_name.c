#include <stddef.h>
#include "function_pointers.h"
/**
 *  print_name - prints name
 *  @name: name to print
 *  @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
