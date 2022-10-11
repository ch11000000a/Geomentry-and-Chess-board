#include <iostream>
using namespace std;
//#define GEOMETRIA_0
//#define GEOMETRIA_1
//#define GEOMETRIA_2
//#define GEOMETRIA_3
//#define GEOMETRIA_4
//#define GEOMETRIA_5
//#define GEOMETRIA_6
//#define CHEES_BOARD
//#define HARDCHESS
int main()
{
	setlocale(LC_ALL, "");
	int length;
	cout << "Введите размер: ";
	cin >> length;
#ifdef GEOMETRIA_0
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // GEOMETRIA_0
#ifdef GEOMETRIA_1
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // GEOMETRIA_1
#ifdef  GEOMETRIA_2
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = length; j > i; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // GEOMETRIA_2
#ifdef GEOMETRIA_3
	for (size_t i = 0; i <= length; i++)
	{
		for (size_t j = length; j > 0; j--)
		{
			if (length - i >= j)
			{
				cout << "* ";
			}
			else
			{

				cout << "  ";
			}
		}
		cout << endl;
	}
#endif // GEOMETRIA_3
#ifdef  GEOMETRIA_4
	for (size_t i = 0; i <= length; i++)
	{
		for (size_t j = length; j > 0; j--)
		{
			if (i < j)
			{
				cout << "  ";
			}
			else
			{

				cout << "* ";
			}
		}
		cout << endl;
	}
#endif // GEOMETRIA_4
#ifdef GEOMETRIA_5
	if (length % 2 != 0)
	{
		length += 1;
	}
	for (size_t i = 1; i <= length; i++)
	{
		for (size_t j = 1; j <= length; j++)
		{
			if (i + length / 2 == j || i - length / 2 == j)
			{
				cout << "\\";
			}
			if ((length / 2) + 1 - i == j || (length / 2) + length - i == j && j < length)
			{
				cout << "/";
			}

			else {
				cout << " ";
			}
		}
		cout << endl;
	}
#endif // GEOMETRIA_5
#ifdef GEOMETRIA_6
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			if ((j + i) % 2 == 0)
				cout << "+ ";
			else
			{
				cout << "= ";
			}
		}
		cout << endl;
	}
#endif // GEOMETRIA_6
#ifdef CHEES_BOARD
	setlocale(LC_ALL, "C");
	for (size_t i = 0; i <= (length + 1); i++)
	{
		for (size_t j = 0; j <= (length + 1); j++)
		{
			if (i == 0 && j == 0)
				cout << "\t" << char(218);//┌
			else if (i == 0 && j == (length + 1)) {

				cout << char(191);//┐
			}
			else {
				if (i == 0)
				{
					cout << char(196) << char(196);//──
				}
				else
				{
					if (i == (length + 1) && j == 0) {
						cout << "\t" << char(192);//└

					}
					else if (i == (length + 1) && j == (length + 1)) {
						cout << char(217);//┘

					}

					else if (j == 0)
					{
						cout << "\t" << char(179);//│
					}
					else if (j == (length + 1))
					{
						cout << char(179);//│
					}
					else if (i == (length + 1)) {
						cout << char(196) << char(196);//──
					}
					else
					{
						((i + j) % 2 == 0) ? cout << char(219) << char(219) : cout << char(255) << char(255);//219█//255 //
					}
				}
			}
		}
		cout << endl;
	}
#endif // CHEES_BOARD
#ifdef HARDCHESS
	for (size_t a = 0; a < length; a++)
	{
		for (size_t i = 0; i < length; i++)
		{
			for (size_t j = 0; j < length; j++)
			{
				if ((a + j) % 2 == 0)
				{
					for (size_t f = 0; f < length; f++)
					{
						cout << "* ";
					}
				}
				else
				{

					for (size_t k = 0; k < length; k++)
					{
						cout << "  ";
					}
				}

			}
			cout << endl;
		}
		cout << endl;
	}
#endif // HARDCHESS
}
