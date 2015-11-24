//  In the name of God

    #include <iostream>
    #include <algorithm>
    
    using namespace std;
    
    int m25, m50, m100, n, x;
    
    int main()
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(x==25)
                m25++;
            else if(x==50)
                if(m25>0)
                {
                    m25--;
                    m50++;
                }
                else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            else if(x==100)
                if(m25>0 && m50>0)
                {
                    m25--;
                    m50--;
                    m100++;
                }
                else if(m25>=3)
                {
                    m25-=3;
                    m100++;
                }
                else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
        }
        cout<<"YES"<<endl;
        return 0;
    }