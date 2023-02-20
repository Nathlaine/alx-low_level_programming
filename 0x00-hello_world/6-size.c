#include <stdio>
/**
 * main - display the data type of C programming language.
 * Return: 0 (Run successful)
 */
int main(void)
{
	char m;
	int n;
	long int li;
	long long int liii;
	float k;

	printf("Size of char:%lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of an int:%lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(liii));
	printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(k));
	return (0);
}
