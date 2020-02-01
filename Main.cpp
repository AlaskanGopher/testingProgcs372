#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <string>

using std::string;

int strings(string dummy) { 
	if (dummy == "")
	{
		return 0;
	}
	else
	{
		return dummy[0] - 48; //ASCII 
	}
};

TEST_CASE("An empty string returns zero") {
	CHECK(strings("") == 0);
}

TEST_CASE("A single number returns the value") {
	CHECK(strings("1") == 1);
	CHECK(strings("2") == 2);
	CHECK(strings("10") == 10);
}
