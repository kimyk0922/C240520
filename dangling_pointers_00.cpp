#include<iostream>



using namespace std;


void Maniplate(int* CountPoint)		//	void의 호출어 뒤에 불러올 값을 입력 
{

	*CountPoint = 200;


//	delete CountPoint;				//	연산 처리 중 출력에 필요한 연산 값을 삭제 시
									//	댕글리 포인터가 된다.
}

int main()
{

	int* CountPoint = new int;

	*CountPoint = 100;



	Maniplate(CountPoint);

	cout << *CountPoint << endl;



	delete CountPoint;				//	pointers에 저장된 값을 지우고
	CountPoint = nullptr;			//	pointers에 공간을 초기화해라


	return 0;


}