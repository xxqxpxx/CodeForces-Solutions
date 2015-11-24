#include <iostream>
#include <string>
#include <sstream> 
#include <cctype>

using namespace std;

int main() 
{
    string word ;
    string out; 
    string ah ; 
    string a7 = ".";



    while (cin >> word )
    {



        for (int i=0 ;  i< word.length() ;i++)
        {

            
                


            if (word[i]==&#39;y&#39; || word[i]==&#39;a&#39; || word[i]==&#39;e&#39; || word[i]==&#39;i&#39; || word[i]==&#39;o&#39; || word[i]==&#39;u&#39; ||  word[i]==&#39;A&#39; || word[i]==&#39;E&#39; || word[i]==&#39;I&#39; || word[i]==&#39;O&#39; ||  word[i]==&#39;Y&#39; || word[i]==&#39;U&#39;)
            {  
            }

            else
            {
                out.append(a7);


                char ch = word[i];
                char small = tolower(ch);


                stringstream as ; 
                as <<   small ;
                as >> ah ; 
                out.append(ah);
                    ah.clear(); 

            }
            
    }
            cout << out << endl;
            out.clear () ;

    }

return 0;
}