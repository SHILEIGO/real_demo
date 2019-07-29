#include <iostream>

using namespace std;

class Test1
{
public :
	Test1(int num):n(num){}
private:
	int n;
};
class Test2
{
public :
	explicit Test2(int num):n(num){}
private:
	int n;
};
 
int main()
{
	Test1 t1 = 12;
	Test2 t2(13);
	//Test2 t3 = 14;
        //cout << " t1 " << num.t1  << endl;
	//cout << " t2: " << t2 << endl;
	return 0;
}
