
/*

/*
 * trie.cpp
 *
 *  Created on: Mar 31, 2014
 *      Author: Mostafa Saad
 */

/*

#include<set>
#include<map>
#include<list>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<sstream>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<numeric>
#include<utility>
#include<functional>
#include<stdio.h>
#include<assert.h>
#include<memory.h>
#include<bitset>
#include <stdio.h>
#include <stdlib.h>


using namespace std;


const int MAX_CHAR = 26;

struct trie {
    trie* child[MAX_CHAR];
    bool isLeaf;

    trie() {
        memset(child, 0, sizeof(child));
        isLeaf = 0;
    }

    void insert(char *str) {
        if(*str == &#39;\0&#39;)
            isLeaf = 1;
        else {
            int cur = *str - &#39;a&#39;;
            if(child[cur] == 0 )
                child[cur] = new trie();
            child[cur]->insert(str+1);
        }
    }

    bool wordExist(char* str) {
        if(*str == &#39;\0&#39;)
            return isLeaf;

        int cur = *str - &#39;a&#39;;
        if(child[cur] == 0 )
            return false;   // such path don&#39;t exist

        return child[cur]->wordExist(str+1);
    }

    bool prefixExist(char* str) {
        if(*str == &#39;\0&#39;)
            return true;

        int cur = *str - &#39;a&#39;;
        if(child[cur] == 0 )
            return false;   // such path don&#39;t exist

        return child[cur]->prefixExist(str+1);
    }
};


int main()
{
    trie root;

    /*
    root.insert("abcd");
    root.insert("xyz");
    root.insert("abf");
    root.insert("xn");
    root.insert("ab");
    root.insert("bcd");

    cout<<root.wordExist("xyz")<<"\n";
    cout<<root.wordExist("xy")<<"\n";
    cout<<root.prefixExist("xyz")<<"\n";


        int tst , n , w ;
        char arr[11];

        cin >> tst;

    for ( int i = 0 ; i < tst ; i++)
    {
        cin >> n ;
        for (int j = 0 ; j < n ; j++ )
        {

            cin >> w ;

            char word[11];
            stringstream x;
            x << w ;
            x >> word;


            root.insert(word);
        }


        cout<<root.prefixExist("911")<<"\n";

    }

    return 0;
    }


*/

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
         int n , sum = 0;

         cin >> n ;

        int* arr = new int[n];


        for ( int i = 0 ; i < n ; ++i)
                cin >> arr[i];

        for ( int i = 0 ; i < n ; ++i)
                {

                    if ( arr[i] == 1)
                            ++sum;


                     else if ( arr[i] == 0 && arr[i+1] == 1 && i != 0)
                    {
                        ++sum;
                    }

                     else if ( arr[i] == 0 && arr[i+1] == 0 && i != 0 )
                            {

                        for (int j = i ; j < n ; j++)
                            if (arr[j] == 1)
                                    {
                                       sum+=2;
                                       i=j;
                                       break;
                                     }


                            }


                      else
                      {

                             for (int j = i ; j < n ; j++)
                             {


                                if (arr[j] == 1)
                                    {
                                       i=j-1;
                                       break;
                                     }

                             }
                      }



                }


                cout << sum << endl;

        return 0;
}


