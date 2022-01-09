#include <doctest.h>
#include <dummy_lib_cpp/scheduling/annual.hpp>

using namespace dummy_lib;

TEST_CASE("UnitTest_Schedule")
{
	CHECK_NOTHROW(annual::create_schedule(Date{}, Date{}));
}