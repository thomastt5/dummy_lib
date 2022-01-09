use dummy_lib_rust::DeltaDate;
use dummy_lib_rust::Date;

#[test]
fn some_test_func() {
    assert_eq!(DeltaDate::from_dates(Date, Date), DeltaDate::from_dates(Date, Date));
}
