//2022.3.16思考题的完整程序
//鸡兔同笼 author : Nicktang
#include <iostream>
#define rabit (heads - chicken)
using namespace std;

int main() {
	int chicken = 0;
	int heads;
	int legs;
	cout << "鸡兔同笼计算器\nby Nicktang\n请输入现在有多少个头" << endl;
	cin >> heads;
	cout << " \n 请输入腿子数量\n";
	cin >> legs;
	//cout << "调试结果" << heads << legs << chicken <<endl;
	while (legs<chicken*2+rabit*4) {
		chicken++;
		//cout << "调试结果" << heads << legs << chicken << endl;
	}
	if (chicken < 0 || rabit < 0) {
		cout << "你这值有问题啊！检查一下啊\n错误原因为:鸡或者兔子的计算值为负数" << endl;
		system("pause");
		return 0;
	}else if(chicken*2+rabit*4!=legs){
		cout << "你这值有问题啊！检查一下啊\n错误原因为:无法得到正确的鸡或者兔子数量值" << endl;
		system("pause");
		return 0;
	}else {
		cout << "结果:\n鸡子有" << chicken << "\n兔子有" << (heads - chicken) << endl;
		system("pause");
		return 0;
	}
	
}
