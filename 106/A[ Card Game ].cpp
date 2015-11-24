#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

string arr[] = { "6", "7", "8", "9", "T", "J", "Q", "K" , "A" };

int main(){
    
    char T; scanf( "%c\n" ,&T );
    char A[ 5 ] , B[ 5 ];
    scanf( "%s %s" ,A ,B );
    
    int a = -1 , b = -1;
    for( int q = 0 ; q < 9 ; q++ ) if( arr[ q ][ 0 ] == A[ 0 ] ) a = q;
    for( int q = 0 ; q < 9 ; q++ ) if( arr[ q ][ 0 ] == B[ 0 ] ) b = q;
    
    if( A[ 1 ] == T && A[ 1 ] != B[ 1 ] ) printf( "YES\n" );
    else if( A[ 1 ] == B[ 1 ] && a > b ) printf( "YES\n" );
    else printf( "NO" );
    return 0;
}