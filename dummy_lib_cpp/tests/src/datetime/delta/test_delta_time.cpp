#include <doctest.h>
#include <dummy_lib_cpp/datetime/delta/delta_time.hpp>

using namespace dummy_lib;

TEST_CASE("UnitTest_Schedule")
{
	CHECK_NOTHROW(DeltaTime::from_times(Time{}, Time{}));
}