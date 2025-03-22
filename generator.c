#include "unif01.h"
#include "gdef.h"
#include "bbattery.h"
#include "swrite.h"
#include "ufile.h"

int main()
{
	swrite_Basic = FALSE;
	unif01_Gen *gen;
	gen = ufile_CreateReadBin ("binary_converted.txt" , 1000);
	bbattery_SmallCrush (gen);
	return 0;
}

