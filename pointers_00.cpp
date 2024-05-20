#include<iostream>


using namespace std;


int A;


//int main()
//
//{
//
//	int A = 10;				//	일반 int는 영역이 끝나거나 return 값을 만나게 될 경우 사라진다
//							//	pointers의 경우 한번 저장 후에는 delete할 때 까지 유지 된다.
//
//
//
//	int* P = new int;		//	변수 P의 주소 위치 값을 저장해라
//							//	new는 동적 메모리 할당 함수로
//							//	상수의 주소 위치 값과 그곳에 저장된 값을 저장한다.
//							//	(int 값에 대한 주소 위치에 저장된 값을 저장해라)
//
//							//	https://boycoding.tistory.com/204#google_vignette
//
//
//	*P = 10;				//	저장한 주소 위치에 10을 저장해라
//
//	cout << *P << endl;		//	pointers P에 저장한 값을 불러와라
//
//
//
//	delete P;				//	P의 주소 위치 값과 그안에 저장된 값을 삭제해라
//
//
//	return 0;
//
//}


int main()
{


		int Count = 10;				//	변수 Count에 10을 저장
		int* A = new int[Count];	//	pointers A의 위치 주소 값에 10개의 배열을 저장

									//	배열에 pointers를 사용할때, 배열의 갯수를 변수로 사용할시
									//	유동적으로 방의 크기를 조절할 수 있다.


		*A = 10;					//	pointers A에 10을 저장해라
		A[0] = 10;					//	A의 0번(첫번째)칸에 10을 저장해라

		*(A + 1) = 20;				//	pointers A의 다음 1칸에 20을 저장해라
		A[1] = 20;					//	A의 1번(두번째)칸에 20을 저장해라


		cout << *(A + 1) << endl;	//	pointers A의 첫칸으로 부터 1칸 다음 저장 값을 출력
		cout << A[1] << endl;		//	A의 1번(두번째)칸의 저장 값을 출력


		delete[] A;					//	배열을 사용 시 new와 delete 뒤에도 []을 붙여 준다.
									//	delete는 



		int* P = nullptr;			//	P를 pointers로 지정하고 그 위치 주소에 저장된 값을 비워라
		int* P2 = nullptr;			//	P2를		"		"			"			"
									// 


		P = new int;				//	
		P2 = P;
		delete P;

		P = nullptr;
		P2 = nullptr;



//	댕글링 포인터(Dangling Pointers)
//	이미 비워진 주소를 가리키고 있는 porinters
//	
//	


//	malloc()
//	시작 위치만 잡아주면 입력 값에 맞게 공간을 만들어주는 함수


	return 0;

}