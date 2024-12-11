#include <stdio.h>

int	main(void)
{
	// printf ("[%#d]\n", 42); // OUTPUT: 42 after warning
	// printf ("[%0.5d]\n", 42); // zero padding by left with worning
	printf ("[%#x]\n", 42); // OUTPUT: 0x2a
	printf ("[%#5x]\n", 42); // pad spaces before 0x with counting it
	printf ("[% 5d]\n", 42); // space padding by left
	printf ("[%.5d]\n", 42); // zero padding by left
	printf ("[%05d]\n", 42); // zero padding by left
	printf ("[%+d]\n", 42); // force sign
	printf ("[%+5d]\n", 42); // force sign then pad
	printf ("[%-5d]\n", 42); // space padding by the right
	printf ("[%+-5d]\n", 42); // force sign and space padding by the right
	printf ("[%-+5d]\n", 42); // force sign and space padding by the right
	printf ("[%#.5x]\n", 42); // zero padding by the left after 0x and without counting it
	printf ("[%#06x]\n", 42); // zero padding by the left after 0x but count it
	printf ("[%+.5d]\n", 42); // force sign before zero padding by the left without counting it
	printf ("[%-10.5d]\n", 42); // zero padding by the left then space padding by right
	printf ("[%+10.5d]\n", 42); // zero padding by the left then force sign then space padding by left
	printf ("[%-+10.5d]\n", 42); // zero padding by the left then force sign then space padding by right
	printf ("[%+0d]\n", 42); // zero padding by the left then force sign then space padding by right
	printf ("[%10c]\n", 65);
	return (0);
}