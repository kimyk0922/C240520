#include<iostream>
#include<string>					//	string을 사용할 수 있게 해주는 선언문


#include<conio.h>					//	각종 Input을 사용할 수 있게 해주는 헤더
									
									//	#include <>은 정식 선언문을 검색하여 사용하는 것
									//	#include ""은 커스텀 된 선언문을 검색하여 사용하는 것
									//	커스텀 된 선언문은 .h를 붙여 만든다.

									//	.h가 붙지 않은 선언문은 C++에서 표준으로 사용하는 선언문
									//	.h가 붙은 선언문은 C언어에서 사용하던 선언문
									//										

using namespace std;



int main()
{
									//	int, float, bool, char, string

	string Message = "Goat";		//	string 함수를 사용할때는 <string>을 넣어줘야한다.
	string Message2 = "Doom";		//	#include<string>


	cout << Message + Message2 << endl;



	return 0;

}