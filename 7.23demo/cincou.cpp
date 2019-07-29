#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
char store[100];
cout << "your data is:  ";
cin >> store;

cout<<setiosflags(ios::left|ios::showpoint);  // 设左对齐，以一般实数方式显示
cout.precision(5);       // 设置除小数点外有五位有效数字 
cout<< store <<endl;
cout.width(10);          // 设置显示域宽10 
cout.fill('*');          // 在显示区域空白处用*填充
cout<<resetiosflags(ios::left);  // 清除状态左对齐
cout<<setiosflags(ios::right);   // 设置右对齐
cout<< 123.4567899 <<endl;
cout<<setiosflags(ios::left|ios::fixed);    // 设左对齐，以固定小数位显示
cout.precision(3);    // 设置实数显示三位小数
cout<< 1234.567899 <<endl; 
cout<<resetiosflags(ios::left|ios::fixed);  //清除状态左对齐和定点格式
cout<<setiosflags(ios::left|ios::scientific);    //设置左对齐，以科学技术法显示 
cout.precision(3);   //设置保留三位小数
cout<< 1234.567899 <<endl;
    return 0;
}
