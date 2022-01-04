#ifndef header_h
#define header_h

#include <iostream>
#include <math.h>
#include <exception>
#include <new>

using namespace std;

void allokera_KiB();
void allokera_GiB();
void KiB_till_Bytes();

void allokera_GiB()
{
	int counter = 0;

	try
	{
		while (true)
		{
			new int8_t[int(pow(2, 30))]; 
			counter++;
		}
	}
	catch (bad_alloc &e)
	{
		cerr << "Error: " << e.what() << endl;
		cout << "Minne allokerat: " << counter << endl;
	}
}
void allokera_KiB()
{
	int counter = 0;
	
	try
	{
		while (true)
		{
			new int8_t[int(pow(2, 10))]; 
			counter++;
		}
	}

	catch (bad_alloc &e)
	{
		cerr << "Error: " << e.what() << endl;
		cout << "Minne allokerat: " << counter << endl;
	}
}

void KiB_till_Bytes()
{
	int counter = 0;
	int tmp = 8; 
	int KiB_till_Bytes;
	
	try
	{
		while (true)
		{
			new int8_t[int(pow(2, 10))]; 
			counter++;
			
			if (counter == pow(2, 10))
			{
				KiB_till_Bytes = counter / tmp;
			}
		}
	}

	catch (bad_alloc &e)
	{
		cerr << "Error message: " << e.what() << endl;
		cout << "1 KiB to byte is: " << KiB_till_Bytes << endl;
	}
}
#endif
