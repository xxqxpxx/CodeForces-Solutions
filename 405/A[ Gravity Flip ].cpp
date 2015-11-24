    #include <iostream>

    using namespace std;


    void selectionSortArray(int arr[] , int SIZE )
    {
        int min;
        for (int i = 0; i < SIZE; i++)
        {
            min = i;
            for (int j = i + 1; j < SIZE; j++)
            {
                if (arr[j] < arr[min])
                    min = j;
            }
            int tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
        }
    }

    int main ()
    {

        int x ;

        cin >> x ;

        int* arr = new int[x];

        for ( int i = 0 ; i < x ; ++i)
                cin >> arr[i];


            selectionSortArray(arr , x );

            for ( int i = 0 ; i < x ; ++i)
                cout << arr[i] << " ";

        return 0 ;
    }
