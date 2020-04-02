#include <stdio.h>
#include "note01.h"
int main(void)
{
	printf("FILE:		%s\nFUNC:		%s\nLINE:		%d\n" , __FILE__,__FUNCTION__,__LINE__);
	note01();
}