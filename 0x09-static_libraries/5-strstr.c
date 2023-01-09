#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string to scan
 * @needle: substring to scan for
 *
 * Return: pointer to located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *located;

	located = strstr(haystack, needle);
	return (located);
}
