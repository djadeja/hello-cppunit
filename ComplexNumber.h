#ifndef __COMPLEX_NUMBER__
#define __COMPLEX_NUMBER__

class ComplexNumber {

private:
	/* data */
	double real, imaginary;
public:
	ComplexNumber(const double real, const double imaginary);
	~ComplexNumber();
	friend bool operator ==(const ComplexNumber& a, const ComplexNumber& b);
	friend ComplexNumber operator +(const ComplexNumber &a, const ComplexNumber &b );

};

ComplexNumber::ComplexNumber(const double r, const double i): real(r), imaginary(i) {
}

ComplexNumber::~ComplexNumber() {
}

bool operator ==( const ComplexNumber &a, const ComplexNumber &b ) {
	return a.real == b.real  &&  a.imaginary == b.imaginary; 
}

ComplexNumber operator +(const ComplexNumber &a, const ComplexNumber &b ) {
	return ComplexNumber(a.real + b.real,  a.imaginary + b.imaginary); 
}

#endif // __COMPLEX_NUMBER__