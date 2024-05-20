#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;




char J, Q, K = 10;

int Card[5] = { 0, };
int* PCard = &Card[5];

int Sum = Card[0] + Card[1] + Card[2] + Card[3] + Card[4]


char Y;

void A()
{

	if (Card[5] == 1);
	{

		cout << "A" << endl;

	}

	if (Card[5] == 11);
	{

		cout << "A" << endl;

	}

}



int main()
{

	int Call = 0;

	char Y = 1;
	char N = 0;


	srand(time(NULL));




	for (int Number = 0; Number <= 4; ++Number)
	{
		

		for (int Sum[5] = { 0, }; Sum[5] < 21;)
		{
			cin >> Call;

			
			if (Call == 1)
			{

				Card[Number] = rand() % 11 + 1;

				cout << "Card : ";

				/*if (Card[Number] == 1);
				{

					cout << "A" << endl;

				}

				if (Card[Number] == 11);
				{

					cout << "A" << endl;

				}*/

				cout << Card[Number] << endl;
				
				
			}

			else if (Call == 0)
			{

				cout << "종료합니다." << endl;

			}

			cout << Sum << endl;

		}




	}
	return 0;

}