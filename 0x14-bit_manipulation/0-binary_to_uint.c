#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int jv;
	int hi, ma;

	if (!b)
		return (0);
	jv = 0
		for (hi = 0; b[hi] != '\0'; hi++)
			;
	for (hi--, ma = 1; hi >= 0; hi--, ma *= 2)
	{
		if (b[hi] != '0' && b[hi] != '1')
		{
			return (0);
		}
		if (b[hi] & 1)
		{
			jv += ma;
		}
	}
	return (jv);
}
