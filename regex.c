#include "regex.h"

bool regex_match(char const *s, char const *p)
{
	if (!*p) return !*s;
	if (*p == *s) return regex_match(s+1, p+1);
	return false;
}
