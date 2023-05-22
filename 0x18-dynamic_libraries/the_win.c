#include <unistd.h>
#include <string.h>
int rand()
{
	static int rn = -1;

	rn++;
	if (rn == 0)
		return 8;
	if (rn == 1)
		return 8;
	if (rn == 2)
		return 7;
	if (rn == 3)
		return 9;
	if (rn == 4)
		return 23;
	if (rn == 5)
		return 74;
	return rn * rn % 30000;
}
