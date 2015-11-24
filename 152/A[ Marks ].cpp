#include <iostream>
#include <string>

using namespace std;

void Input(int Student , int Subject);
void WhoIsTheBest(int Student , int Subject);
char arr[100][100];
bool Index[100];


int main()
{

	int Student , Subject;
	int counter = 0;

	cin >> Student >> Subject;

	Input(Student,Subject);
	WhoIsTheBest(Student , Subject);

	for(int x = 0 ; x<Student ; x++)
	{
		if(Index[x] == true)
			counter ++;

	}


	cout << counter << endl;

	/*system("pause");*/
	return 0;
}

void Input(int Student , int Subject)
{
	for(int x = 0 ; x<Student ; x++)
	{
		for(int y = 0 ; y<Subject; y++)
			cin >> arr[x][y];
	}
}

void WhoIsTheBest(int Student , int Subject)
{
	int Num , Max=-1 ,  MaxIndex;
	int MaxArr[100];

	for(int x = 0 ; x<Subject ; x++)
	{
		for(int y=0  ; y<Student; y++)
		{
			Num = arr[y][x] - &#39;0&#39;;

			MaxArr[y]= Num;

			if(Num >Max)
				Max = Num ; 

		}

		for(int x = 0 ; x<Student ; x++)
		{
			if(MaxArr[x] == Max )
				Index[x] = true;
		}
		Max = -1;
	}

}