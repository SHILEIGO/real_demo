#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
	using namespace std;
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("infile.dat");
	if(in_stream.fail())
	{
		cout << "input file opening fail!\n";
		exit(1);
	}

	out_stream.open("outfile.dat");
	if(out_stream.fail())
	{
		cout << "output file opening fail!\n";
		exit(1);	
	}
	int num1,num2,num3,num4,num5;
	in_stream >>num1 >>num2 >>num3 >>num4 >>num5;
	cout << " It's successful! " << endl;
	out_stream << "The sum of the 5 nums in infile.dat\n"
		   <<" is " << (num1+num2+num3+num4+num5)   <<endl;
	
	in_stream.close();
	out_stream.close();

	return 0;
}
