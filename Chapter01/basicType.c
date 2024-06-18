#include <stdio.h>
#include <limits.h>

main()
{
	printf("types\tbytes\tmin\t\t\tmax\n");
	printf("char\t%ld\t%d\t\t\t%d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("int\t%ld\t%d\t\t%d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("short\t%ld\t%d\t\t\t%d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("long\t%ld\t%ld\t%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("float\t%ld\n", sizeof(float));
	printf("double\t%ld\n", sizeof(double));
}
