use dummy_lib_rust::DeltaTime;
use dummy_lib_rust::Time;

#[test]
fn some_test_func() {
    assert_eq!(DeltaTime::from_times(Time, Time), DeltaTime::from_times(Time, Time));
}
