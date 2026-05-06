//simple_ptr.cpp
#include<iostream>

using namespace std;

int main(void) {
	int x = 5;
	int y = 10;

	//p는 x를 가리킴
	int* p = &x;
	int* q = &y;
	cout << "x= " << x <<", y= "<<y<< endl;
	cout << "x의 주소= " << p <<", y의 주소= "<<q<< endl;

	//p를 이용해 x값을 변경
	*p = 6;
	*q = *p * 2;
	cout << "x= " << x << ", y= " << y << endl;
	cout << "x의 주소= " << p << ", y의 주소= " << q << endl;

	int a, b, c, d, e, f, g;
	int* h, i, j, k, l, m, n;

	cout << "a=" << a << endl
		<< "b=" << b << endl
		<< "c=" << c << endl
		<< "d=" << d << endl
		<< "e=" << e << endl
		<< "f=" << f << endl
		<< "g=" << g << endl;

	cout << endl << "변수의 주소:"
		<< "h=" << h << endl
		<< "i=" << i << endl
		<< "j=" << j << endl
		<< "k=" << k << endl
		<< "l=" << l << endl
		<< "m=" << m << endl
		<< "n=" << n << endl;


	return 0;
}
