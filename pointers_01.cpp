#include<iostream>
#include<vector>
#include<list>



using namespace std;					//	STL (자료 구조 알고리즘) , TMap , TSet , Class
										//	


int main()
{
	vector<int> IntArray;

	IntArray.push_back(1);
	IntArray.push_back(2);
	IntArray.push_back(3); 
	IntArray.push_back(4);


	cout << IntArray[0] << endl;
	cout << IntArray[1] << endl;
	cout << IntArray[2] << endl;
	cout << IntArray[3] << endl;

//===============================================================================================

	list<int> IntList;
	IntList.push_back(1);
	IntList.push_back(2);
	IntList.push_back(3);
	IntList.push_back(4);


	for (auto& Data : IntList)
	{

		cout << Data << endl;

	}





	return 0;


}