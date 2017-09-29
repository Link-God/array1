#include <iostream>
#include <sstream>
using namespace std ;
int main()
{
   int a =0;
   for( string string; getline( cin, string ); ) 
   {
       int array[ 10 ];
       istringstream stream( string );
       bool fail = false;
       for( int i = 0; i < 10; ++i ) {
           if( !( stream >> array[ i ] ) ) {
               fail = true;
               a=1;
               break;
           }
       }
       
       if( !fail )
       {
           int max=array[0];
             for(int i=0;i<10;i++)
                {
                    if (array[i]>max)
                        {
                            max=array[i];
                        }
                }
        if(a!=1)
            {
                cout<<max;
                return 0;
            }
       }
       else 
            {
                cout << "An error has occured while reading numbers from line" << endl;
                return 0;
            }
   }
}
