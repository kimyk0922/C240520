#include<iostream>
#include<string>					//	string�� ����� �� �ְ� ���ִ� ����


#include<conio.h>					//	���� Input�� ����� �� �ְ� ���ִ� ���
									
									//	#include <>�� ���� ������ �˻��Ͽ� ����ϴ� ��
									//	#include ""�� Ŀ���� �� ������ �˻��Ͽ� ����ϴ� ��
									//	Ŀ���� �� ������ .h�� �ٿ� �����.

									//	.h�� ���� ���� ������ C++���� ǥ������ ����ϴ� ����
									//	.h�� ���� ������ C���� ����ϴ� ����
									//										

using namespace std;



int main()
{
									//	int, float, bool, char, string

	string Message = "Goat";		//	string �Լ��� ����Ҷ��� <string>�� �־�����Ѵ�.
	string Message2 = "Doom";		//	#include<string>


	cout << Message + Message2 << endl;



	return 0;

}