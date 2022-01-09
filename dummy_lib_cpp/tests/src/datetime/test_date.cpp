#include <doctest.h>
#include <dummy_lib_cpp/datetime/date.hpp>

using namespace dummy_lib;

TEST_CASE("UnitTest_Date")
{
	CHECK_NOTHROW(Date{});
}