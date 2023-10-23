# hello-cppunit
Hello World program for CppUnit using With helper macros and TestFactoryRegistry

## Compile and build the CppUnit test suite binary
- Run following command to 
	> cd build

	> cmake ..
	
	> cmake --build .

- Please note that in CMakeLists.txt, 
	- C++11 Standard is used
	- cppunit library is linked

## Run the test suite
- Run the command from the command prompt
	>./HelloCppUnit

## The successful result's output will be similar to,
```
>./HelloCppUnit 
..


OK (2 tests)

```

## The failed result's output will be similar to
```
>./HelloCppUnit 
..F


!!!FAILURES!!!
Test Results:
Run:  2   Failures: 1   Errors: 0


1) test: ComplexNumberTest::testAddition (F) line: 39 /Users/divyarajsinhjadeja/src/cppunit/HelloCppUnit/ComplexNumberTest.h
assertion failed
- Expression: *m_10_1 + *m_1_1 == *m_11_2

```
