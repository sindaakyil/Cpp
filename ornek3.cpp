#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   
        cout  << 1990 << setw(5) << 135 << endl
              << 1991 << setw(5) << 7290 << endl
              << 1992 << setw(5) << 11300 << endl
              << 1993 << setw(5) << 16200 << endl; 
        cout<<endl; 
        cout  << 1990 << '\t' << 135 << endl
              << 1991 << '\t' << 7290 << endl
              << 1992 << '\t' << 11300 << endl
              << 1993 << '\t' << 16200 << endl;
       return 0; 
}
