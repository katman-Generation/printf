#include "main.h"

int main(void)
{
	int i = 123;
	char c = 'L';
	char *str = "we are great at what we do";

	_printf("I can tell that %i is a num, %c is a char and %s\n", i, c, str);
	_printf("It's also incredible that we can print \% using \\\n");
	if(_printf != 0)
		return (1);
}
