#include <iostream>

using namespace std;

class Test1
{
public :
        void test();
};

void Test1::test()
{
int n = 10;
cout << " n: " << n << endl;

}
int main()
{
        Test1 num;
	num.test();
	return 0;
}
