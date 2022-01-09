#include <doctest.h>
#include <dummy_lib_cpp/datetime/time.hpp>

using namespace dummy_lib;

TEST_CASE("UnitTest_Time")
{
	CHECK_NOTHROW(Time{});
}