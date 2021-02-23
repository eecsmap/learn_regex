#define BOOST_TEST_MODULE Regex Unit Test
#include <boost/test/included/unit_test.hpp>

#include "regex.h"

BOOST_AUTO_TEST_CASE(testsomething)
{
	BOOST_TEST(regex_match("", ""));
}
