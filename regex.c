#include "regex.h"
#include <assert.h>

static inline bool first_match(char const *s, char const *p)
{
	assert(*p);
	return *s && *p == '.' || *s == *p;
}

bool regex_match(char const *s, char const *p)
{
	if (!*p) return !*s;
	if (p[1] == '*') return regex_match(s, p+2) || first_match(s, p) && regex_match(s+1, p);
	if (first_match(s, p)) return regex_match(s+1, p+1);
	return false;
}
