use dummy_lib_rust::scheduling;
use dummy_lib_rust::Date;

#[test]
fn some_test_func() {
    assert_eq!(scheduling::annual::create_schedule(Date, Date), scheduling::annual::create_schedule(Date, Date));
}
