//#include <iostream>
//using namespace std;
//
//string binary(string x)
//{
//    string ans;
//    while(1)
//    {
//        while(x.length()>0 and x[0]==0)
//            x=x.substr(1,x.length());
//        if(x.length()==0)
//            return ans;
//        if(x[x.length()-1]%2)
//            ans=ans+"1";
//        else
//            ans=ans+"0";
//        for(int i=0;i<x.length();++i)
//        {
//            if(x[i]%2 and i!=x.length()-1)
//                x[i+1]+=10;
//            x[i]/=2;
//        }
//    }
//}
//
//int main()
//{
//    string x;
//    cin>>x;
//    for(int i=0;i<x.length();++i)
//        x[i]-=&#39;0&#39;;
//    string ans=binary(x);
//    if(ans=="")
//        ans="0";#incl
//    for(int i=ans.length()-1;i>=0;--i)
//        cout<<ans[i];
//    cout<<endl;
//    return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstdlib>
using namespace std;


int main()
{
     string pass ;
     string z;
     vector <string> arr;
     string sum ="";
     string w;

     cin >> pass;
     for (int i = 0 ; i <= 9 ; ++i)
     {
         string p ;
         cin >> p;
         arr.push_back(p);
     }

        //cout << "here" << endl;




     for (int i = 0 ; i < 10-1 ; ++i)
     {

         z = pass.substr(i*10 , 10);
         for (int j = 0 ; j < 10 ; ++j)
         {

            if (z == arr[j])
            {
                stringstream x;
                x << j;
                x >> w ;
                sum+=w ;
            }
        }

     }


     cout << sum << endl;

    return 0 ;
}

