#include<iostream>


using namespace std;


int A;


//int main()
//
//{
//
//	int A = 10;				//	�Ϲ� int�� ������ �����ų� return ���� ������ �� ��� �������
//							//	pointers�� ��� �ѹ� ���� �Ŀ��� delete�� �� ���� ���� �ȴ�.
//
//
//
//	int* P = new int;		//	���� P�� �ּ� ��ġ ���� �����ض�
//							//	new�� ���� �޸� �Ҵ� �Լ���
//							//	����� �ּ� ��ġ ���� �װ��� ����� ���� �����Ѵ�.
//							//	(int ���� ���� �ּ� ��ġ�� ����� ���� �����ض�)
//
//							//	https://boycoding.tistory.com/204#google_vignette
//
//
//	*P = 10;				//	������ �ּ� ��ġ�� 10�� �����ض�
//
//	cout << *P << endl;		//	pointers P�� ������ ���� �ҷ��Ͷ�
//
//
//
//	delete P;				//	P�� �ּ� ��ġ ���� �׾ȿ� ����� ���� �����ض�
//
//
//	return 0;
//
//}


int main()
{


		int Count = 10;				//	���� Count�� 10�� ����
		int* A = new int[Count];	//	pointers A�� ��ġ �ּ� ���� 10���� �迭�� ����

									//	�迭�� pointers�� ����Ҷ�, �迭�� ������ ������ ����ҽ�
									//	���������� ���� ũ�⸦ ������ �� �ִ�.


		*A = 10;					//	pointers A�� 10�� �����ض�
		A[0] = 10;					//	A�� 0��(ù��°)ĭ�� 10�� �����ض�

		*(A + 1) = 20;				//	pointers A�� ���� 1ĭ�� 20�� �����ض�
		A[1] = 20;					//	A�� 1��(�ι�°)ĭ�� 20�� �����ض�


		cout << *(A + 1) << endl;	//	pointers A�� ùĭ���� ���� 1ĭ ���� ���� ���� ���
		cout << A[1] << endl;		//	A�� 1��(�ι�°)ĭ�� ���� ���� ���


		delete[] A;					//	�迭�� ��� �� new�� delete �ڿ��� []�� �ٿ� �ش�.
									//	delete�� 



		int* P = nullptr;			//	P�� pointers�� �����ϰ� �� ��ġ �ּҿ� ����� ���� �����
		int* P2 = nullptr;			//	P2��		"		"			"			"
									// 


		P = new int;				//	
		P2 = P;
		delete P;

		P = nullptr;
		P2 = nullptr;



//	��۸� ������(Dangling Pointers)
//	�̹� ����� �ּҸ� ����Ű�� �ִ� porinters
//	
//	


//	malloc()
//	���� ��ġ�� ����ָ� �Է� ���� �°� ������ ������ִ� �Լ�


	return 0;

}