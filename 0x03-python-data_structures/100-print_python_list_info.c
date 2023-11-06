#include <Python.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_python_list_info - prints basic info about
 * @p: A Pyobject list
 */
void print_python_list_info(Pyobject *p)
{
	int elem;

	printf("[*] Size of the Python List = %lu\n", Py_Size(p));
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (elem = 0; elem < Py_SIZE(p); elem++)
		printf("Element %d: %s\n", elem, Py_TYPE(Pylist_GetItem))
}
