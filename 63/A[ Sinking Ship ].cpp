#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;



void printVec(vector<string> v2)
{
    for (int i = 0; i < (int)v2.size(); ++i)
            cout<<v2[i]<< endl;
}


int main()
{

    int n , f ;
    string x;


    cin >> n ;

    vector <string> wc ,man , c ;

    for (int i = 0 ; i <= n ; ++i)
        {
            getline(cin , x);


          //  cout << x << endl;
            if (x.find(" rat") != -1) {
                cout << x.substr(  0  , x.find(" ") ) << endl;
                }

            else  if(x.find(" captain") != -1)
            {
              c.push_back( x.substr(  0  , x.find(" ") ));
            }

            else  if(x.find(" woman") != -1)
            {
              wc.push_back(x.substr(  0  , x.find(" ")));
            }


            else  if(x.find(" child") != -1)
            {
              wc.push_back(x.substr(  0  , x.find(" ")));
            }

             else  if(x.find(" man") != -1)
            {
              man.push_back(x.substr(  0  , x.find(" ")));
            }


        }



    printVec(wc);
    printVec(man);
    printVec(c);


    return 0;

}
