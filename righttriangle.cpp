#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char* argv[] )
{
	int range;
	ifstream in(argv[1]);
	in >> range;
	in.close();

	for (int r = 1; r <= range; r++)
	{
		for (int c = 1; c <= r; c++) cout << '*';
		cout << '\n';
	}
return 0;
}
