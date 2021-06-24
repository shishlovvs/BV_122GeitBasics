#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define DOWN_RIGHT_ANGLE	(char)217
#define DOWN_LEFT_ANGLE		(char)192
#define VERT_LINE			(char)179
#define HORIZ_LINE			(char)196 << (char)196
#define WHITE_BLOCK			"\xDB\xDB"//(char)219 << (char)219
#define BLACK_BLOCK			"\x20\x20"//(char)32 << (char)32
//#define FIRST_VARIATION


void main()
{
	setlocale(LC_ALL, "ru");
	setlocale(LC_ALL, "C");
#ifdef FIRST_VARIATION
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	//for (int i = 0; i < 256; i++) {
	//	cout << i << "\t" << char(i) << endl;
	//}
	n++;
	for (int i = 0; i <= n; i++)
	{

		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n) cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZ_LINE;
			else if (j == 0 || j == n) cout << VERT_LINE;
			else
			{
				/*if ((i + j) % 2 == 0) cout << WHITE_BLOCK;
				else cout << "  ";*/
				cout << ((i + j) % 2 == 0 ? WHITE_BLOCK : BLACK_BLOCK);
			}
		}
		cout << endl;
	}
#endif // FIRST_VARIATION


	int a;
	cout << "¬ведите количество итераций: "; cin >> a;
	
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << "* ";
		}cout << endl;
	} 

}