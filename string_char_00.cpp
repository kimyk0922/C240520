#include<iostream>
#include<string>

using namespace std;



int main()
{
//	C언어에 문자열은 존재하지 않는다 (문자배열뿐)

	char H[5] = { 'H', 'E', 'L', 'L', 'O' };

	for (int i = 0; i < 5; ++i)
	{

		cout << H[i];

	}

	cout << endl;

//1번	char M[6] = { 'H', 'E', 'L', 'L', 'O', \0 };		

//2번	char M[6] = { "HELLO" };	
 

//	1번과 2번의 결과 값과 표현은 같다.					
//	\0는 null을 의미, null을 뜻하는 \0을 만나면 처리를 끝낸다.
//	1번의 경우 \0을 붙이지 않으면 문자열로 취급 되지 않는다.
//	\0을 붙임으로 문자열이라는 걸 인식시켜준다. 

//	\t 는 Tab Key의 기능
//	\b 는 Backspace의 기능, \b 앞의 문자 하나를 지우고 뒤의 문자를 끌어온다. 
//	<< endl; 현재 열이 끝났으니 출력, \n 현재 열을 기억해뒀다가 출력

	char M[6] = { "HELLO" };



	cout << M << endl;




	return 0;



}

