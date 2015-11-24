#include <bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	//freopen("in.in" , "r" , stdin);
	//freopen("out.out" , "w" , stdout);
#endif


	string arr[5] = {"Sheldon" , "Leonard" , "Penny" , "Rajesh" , "Howard"};
/*
	unsigned long long int x , z = 5 , stp , sum= 0 , p = 0 ;

	cin >> x;


    if (x <= 5)
    {
        cout << arr[x-1] << endl;
        return 0;
    }


	while(x > z)
	{
        sum+=z;
        if (sum > x)
            sum-=z;
		z *= 2;
		++p;
	}

	if (x != z){
		z/=2;
    }

	stp = (z / 5)   ;

	cout << stp << endl;

	for (int i = 1 ; i <= 5 ; ++i)
	{
		sum+=stp;
        cout << i << endl;
		if (x <= sum){
			cout << arr[i-1] << endl;
			break;
			}
	}*/
    unsigned long long n,step=5,drank = 0;
    cin>>n;
    for(;drank<n;drank+=step,step*=2);//cout<<drank<<endl;
    step/=2;
    drank-=step;
    step/=5;
    //cout<<drank<<endl;
    //cout<<step<<endl;
    for(int i=0;i<=n;i++)
    {
        //drank+=step;
        if(drank>=n)
        {
            //cout<<drank-step<<endl;
            cout<<arr[i-1]<<endl;
            break;
        }
        drank+=step;
    }


	return 0 ;

}
