#include<iostream>



using namespace std;


void Maniplate(int* CountPoint)		//	void�� ȣ��� �ڿ� �ҷ��� ���� �Է� 
{

	*CountPoint = 200;


//	delete CountPoint;				//	���� ó�� �� ��¿� �ʿ��� ���� ���� ���� ��
									//	��۸� �����Ͱ� �ȴ�.
}

int main()
{

	int* CountPoint = new int;

	*CountPoint = 100;



	Maniplate(CountPoint);

	cout << *CountPoint << endl;



	delete CountPoint;				//	pointers�� ����� ���� �����
	CountPoint = nullptr;			//	pointers�� ������ �ʱ�ȭ�ض�


	return 0;


}