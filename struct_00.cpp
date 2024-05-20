#include<iostream>
#include<string>



using namespace std;



// struct 는 커스텀 변수를 만들어주는 명령문

struct Vector2D			//	X (int = 4Byte) + Y (int = 4Byte)
{						//	= 총 8Byte

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
//							|	LED 밝기 기준
//							|	추후 확장에 용이

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
	Player->Position.X = 10;			//	pointers로 지정된 변수 뒤에 .으로 값을 불러올 
	Player->Position.Y = 10;			//	변수 명을 표시해준다.
	Player->Shape = 'P';				//	(예시 (*Player).Position.X 는
	Player->Name = "주";					//	Player 라는 pointers로 변수 Postition을 가리키고
	Player->GetActorPostion().Y;		//	거기에 변수 X을 불러와라.)
										//	. 와 ->는 같은 용도
										//	(예시 Player->Position.X )
	
	
	cout << Player->Position.X << endl;

	delete Player;


	return 0;

}
