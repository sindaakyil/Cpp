#include <iostream>
using namespace std;
int main()
{
       float galon, kup;
       cout << "\nGalon miktarı giriniz: ";
       cin >> galon;
       kup = galon / 7.481;
       cout << galon <<" galon " << kup <<" metre kup etmektedir"<< endl;
       return 0;
}