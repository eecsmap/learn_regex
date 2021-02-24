#include "regex.h"
#include <assert.h>

bool regex_match(char const *s, char const *p)
{
	if (!*p) return !*s;
	bool first_matched = *s && *p == '.' || *s == *p;
	if (p[1] == '*') return regex_match(s, p+2) || first_matched && regex_match(s+1, p);
	if (first_matched) return regex_match(s+1, p+1);
	return false;
}
