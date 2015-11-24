#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t , n;
    queue <int> p , m , pe;
    cin >> t;

    for (int i = 0 ; i < t ; ++i)
    {
        cin >> n;

        if (n == 1)
            p.push(i+1);

         if (n == 2)
            m.push(i+1);

             if (n == 3)
            pe.push(i+1);
    }

    if (pe.empty() || m.empty() || p.empty() )
    {
        cout << 0 << endl;
        return 0 ;
    }

    n = min(pe.size() , min(m.size() , p.size() ) );
    cout << n << endl;

    for (int i = 0 ; i < n ; ++i)
    {
        cout << p.front() << " " <<  m.front()  << " " << pe.front() << endl;
        p.pop() , m.pop() , pe.pop() ;
    }

    return 0;
}
