#include <iostream>
#include "zigzag.hpp"
using namespace std;
int main()
{
	int t[64];
	for ( int i = 0; i < 64; i++ )
	{
			t[i] = i;
			cout << t[i] << ' ';
	}
	cout << endl;

	int x[64];
	zigzag(t,x);
	
	for ( int i = 0; i < SIZE; i++ )
	{
			cout << x[i] << ' ';
	}
	
	cout << endl;

	return 0;
}

