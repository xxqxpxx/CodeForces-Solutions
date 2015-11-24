#include <iostream>

using namespace std; 


int getGCD(int aOrb, int n);
int WhoIsBiggestNum(int a , int b );
int main()
{


    int a , b , n , result; 
    int counter = 1 ; 


    while ( cin >> a>> b >> n ) 
    {   

        if ( ( a>= 1 && a<= 100 && b>= 1 && b<= 100 && n>= 1 && n<= 100 ) )
        {

            while(n!=0)
            {
                if(counter %2 !=0)
                {
                    result = getGCD(a,n);
                    n-=result;
                }

                else
                {
                    result = getGCD(b,n);
                    n-=result;
                }
                counter ++ ; 
            }
        }

        if ( n == 0 )
        {
            
            if ( counter%2 == 0 ) 
            {
                cout << "0" <<endl;
                counter = 0 ;
            }

            else
            {
                cout << "1" <<endl;
                counter = 0 ;
            }

        }


    }


    return 0;
}

int getGCD(int aOrb, int n)
{
    int x = 1 , max = -1 ;

    int big = WhoIsBiggestNum(aOrb , n);

    for(int x = 1 ; x <=big ; x++)
    {
        if(aOrb % x == 0 && n % x == 0 )
            max = x ; 
    }

    return max; 
}

int WhoIsBiggestNum(int a , int b )
{
    if(a>b)
        return a;
    else 
        return b;
}