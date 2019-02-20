#include "holberton.h"
/**
 *rev_string - reverse the string
 *
 *@s: the pointer
 */
void rev_string(char *s)
{
	int save;
	int decrease = 0;
	int increase = 0;

	while (s[decrease])
		decrease++;
	decrease--;
	while (increase != decrease && increase < decrease)
	{
		save = s[decrease];
		s[decrease] = s[increase];
		s[increase] = save;
		decrease--;
		increase++;
	}
}
