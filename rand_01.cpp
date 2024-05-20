#include<iostream>
#include<string>


using namespace std;


int PlayerCard[10] = { 0, };
int ComputerCard[10] = { 0, };

int PlayerTotal = 0;
int ComputerTotal = 0;

int ThrumpCard = 52;

char CardType[4] = {'D', 'C','S','H'};


void Shuffle()
{
	CardType[0];
	
	for (int i = 0; i < 52; ++i)
	{

		ThrumpCard[i] = i;

	}

	for (int i = 0; i < 10000; ++i)
	{

		int Card1 = rand() % 52;
		int Card2 = rand() % 52;

		int Temp = ThrumpCard[Card1];


		ThrumpCard[Card1] = ThrumpCard[Card2];
		ThrumpCard[Card2] = Temp;

	}

}


int DefineType(int CardNumber)
{

	return CardNumber / 12;

}


int DefineCard(int CardNumber)
{

	return ((CardNumber % 12) + 1);

}


void DrawCard()
{

	int CardCount = 0;

	for (int i = 0; i < 2; ++i)
	{

		PlayerCard[i] = ThrumpCard[i];
		PlayerTotal += DefineCard(PlayerCard[i]);
		CardCount++;

	}

	for (int i = 0; i < 2; ++i)
	{

		ComputerCard[i] = ThrumpCard[i];
		ComputerTotal += DefineCard(ComputerCard[i]);
		CardCount++;

	}


}


void DetermineGame()
{

	if (ComputerTotal > 21)
	{

		cout << "½Â¸®" << endl;

	}

	else if (ComputerTotal <= 21 && PlayerTotal > 21)
	{
	
		cout << "ÆÐ¹è" << endl;
	
	}

	else if (ComputerTotal <= 21 && PlayerTotal <= 21)
	{
		if (ComputerTotal > PlayerTotal)
		{
			cout << "ÆÐ¹è" << endl;
		}

		else
		{
			cout << "½Â¸®" << endl;
		}

	}

}


void OpenitCard()
{

	cout << "Player" << endl;

	for (int i = 0; i < 2; ++i)
	{

		cout << CardType[DefineCard(PlayerCard[i])];
		cout << DefineCard(PlayerCard[i]) << endl;


	}

	cout << "Computer" << endl;
	for (int i = 0; i < 2; ++i)
	{

		cout << CardType[DefineCard(ComputerCard[i])];
		cout << DefineCard(ComputerCard[i]) << endl;

	}

}


int main()
{
	srand(time((time_t*)nullptr));

	Shuffle();
	DrawCard();
	OpenitCard();
	DetermineGame();

	return 0;

}