#include<iostream>
#include<string>



using namespace std;



// struct �� Ŀ���� ������ ������ִ� ��ɹ�

struct Vector2D			//	X (int = 4Byte) + Y (int = 4Byte)
{						//	= �� 8Byte

	int X;

	int Y;

};

struct Actor
{

	Vector2D Position;

	char Shape;

	string Name;

	Vector2D& GetActorPostion()
	{
		this->Position;


	}

};

//			
//		= Photoshop	=		|	= Unreal Engine = 
//		unsigbed , 0 ~ 255	|	float , 0 ~ 1%
//		For CPU				|	For GPU
//							|	LED ��� ����
//							|	���� Ȯ�忡 ����

struct Color
{

	int	R = 1;
	int G = 1;
	int	B = 1;

};


int Main()
{

	Actor* Player = new Actor;

	(*Player).Position.X;
	Player->Position.X = 10;			//	pointers�� ������ ���� �ڿ� .���� ���� �ҷ��� 
	Player->Position.Y = 10;			//	���� ���� ǥ�����ش�.
	Player->Shape = 'P';				//	(���� (*Player).Position.X ��
	Player->Name = "��";					//	Player ��� pointers�� ���� Postition�� ����Ű��
	Player->GetActorPostion().Y;		//	�ű⿡ ���� X�� �ҷ��Ͷ�.)
										//	. �� ->�� ���� �뵵
										//	(���� Player->Position.X )
	
	
	cout << Player->Position.X << endl;

	delete Player;


	return 0;

}
