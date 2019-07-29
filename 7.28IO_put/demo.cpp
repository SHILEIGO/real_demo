#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
	using namespace std;
	ifstream in_stream;
	ofstream out_stream;

	out_stream.open("test.txt");
	//ifstream fis("test.txt");

	out_stream.put('Z');  //out_stream write to file
	
	in_stream.close();
	out_stream.close();

	return 0;
}
