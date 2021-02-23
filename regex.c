#include "regex.h"

bool regex_match(char const *s, char const *p)
{
	if (!*p) return !*s;
	if (p[1] == '*') return regex_match(s, p+2) || (*s == *p || *s && *p == '.') && regex_match(s+1, p);
	if (*p == *s || *s && *p == '.') return regex_match(s+1, p+1);
	return false;
}
