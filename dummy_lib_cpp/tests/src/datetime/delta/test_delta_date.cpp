#include <doctest.h>
#include <dummy_lib_cpp/datetime/delta/delta_date.hpp>

using namespace dummy_lib;

TEST_CASE("UnitTest_Schedule")
{
	CHECK_NOTHROW(DeltaDate::from_dates(Date{}, Date{}));
}