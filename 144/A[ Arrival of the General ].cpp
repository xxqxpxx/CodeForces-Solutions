#include <iostream>
using namespace std;
int main ()
{

     int soldnum , maxflag = 0, lessflag = 0  , max = 0 , less = 1000 , flag = 0  ; 
     int x;
     cin >> soldnum ; 
     int arr[] = {soldnum};
     
     for ( int i = 0 ; i < soldnum  ; i++ )   // the heights of the every solider  and   the exaxt place for the biggest and the smallest number
     {
        
        cin >> x ; 
        arr[i] = x ; 
        
        if ( x > max )
        {
           max = x ;
           maxflag = i ;           
        }

        if ( x <= less   )
        {
            if ( i == soldnum-1)
                break;
            else
            {
          less = x ; 
          lessflag = i ;
            }
        
        } 
     }
     
    if ( x <= less)
    {
        lessflag = soldnum-1;
    //  cout << lessflag << endl; 
    }

     if ( maxflag == 0 && lessflag == soldnum -1  )
     {
         cout << "0" << endl;
         terminate;
     }

      
     else
     {
         flag = 0;
     if (  lessflag  <  maxflag)
     {
         lessflag++;
         maxflag--;
     }

     else if (  lessflag >  maxflag)
     {
        soldnum = soldnum - 1 ; 
     }
      

     flag = (maxflag )  + ( soldnum - lessflag  );

    
    
             cout << flag << endl; 

     
     }
      


    return 0 ; 
}