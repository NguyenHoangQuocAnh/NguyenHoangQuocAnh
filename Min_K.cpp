/*
	Name: So nho nhat co N uoc so
	Copyright: (C) 2022
	Author: NGUYEN HOANG QUOC ANH
	Date: 13/03/22 21:59
	Description: 
	
		* Nhap vao so nguyen duong N
		* Tim so K nho nhat ( K co dung N uoc so )
*/

#include<bits/stdc++.h>
using namespace std;
int Divisor(int a)
{
	int dem = 0;
	for( int i = 1 ; i <= a ; ++i )
	{
		if( a % i == 0 )
		{
			dem++;
		}
	}
	return dem;
}
void Output( )
{
	int n;
	cin >> n;
	for( int i = 1; ; ++i)
	{
		if(Divisor(i) == n)
		{
			cout << i << " is the smallest number with "<< n << " divisor " << endl;
			break;
		}
	}
}
void Test()
{
	//cout << Divisor(4);
	Output();
}
main()
{
	int a;
	cin >> a;
	for( int i = 0 ; i < a ; ++i)
	{
		Output();
	}
	//Test();
	cout << "\nT h e E n d !!";
	return 0;
}

