#ifndef __COMPLEX_NUMBER_TEST__
#define __COMPLEX_NUMBER_TEST__

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "ComplexNumber.h"


class ComplexNumberTest : public CppUnit::TestFixture  {

	CPPUNIT_TEST_SUITE( ComplexNumberTest );
	CPPUNIT_TEST( testEquality );
	CPPUNIT_TEST( testAddition );
	CPPUNIT_TEST_SUITE_END();

	private:
		ComplexNumber *m_10_1, *m_1_1, *m_11_2;
	
	public:
		void setUp() {
			m_10_1 = new ComplexNumber( 10, 1 );
			m_1_1 = new ComplexNumber( 1, 1 );
			m_11_2 = new ComplexNumber( 11, 2 );  
		}

		void tearDown() {
			delete m_10_1;
			delete m_1_1;
			delete m_11_2;
		}

		void testEquality() {
			//CPPUNIT_FAIL( "not implemented" );
			CPPUNIT_ASSERT( *m_10_1 == *m_10_1 );
			CPPUNIT_ASSERT( !(*m_10_1 == *m_11_2) );
		}

		void testAddition() {
			CPPUNIT_ASSERT( *m_10_1 + *m_1_1 == *m_11_2 );
		}
};

#endif // __COMPLEX_NUMBER_TEST__