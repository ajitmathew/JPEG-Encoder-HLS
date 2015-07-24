#include <iostream>
#include "zigzag.cpp"
using namespace std;
int main()
{
	int t[8][8];
	for ( int i = 0; i < 8; i++ )
	{
		for ( int j = 0; j < 8; j++ )
			t[i][j] = 8*i + j;
	}

	int x[8][8];
	zigzag(t,x);
	for ( int i = 0; i < 8; i++ )
	{
		for (int j = 0; j < 8; j++ )
			cout << t[i][j] << ' ';
		cout << endl;
	}
	for ( int i = 0; i < 8; i++ )
	{
		for (int j = 0; j < 8; j++ )
			cout << x[i][j] << ' ';
		cout << endl;
	}

	return 0;
}

