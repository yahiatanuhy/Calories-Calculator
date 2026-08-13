#include <iostream>
using namespace std;

int main()
{
int egg;
int bread;
int water;

cout << "\nCalculate your calories\n";
cout << "\n=======================\n";

cout << "\n how much egg did you eat?\n";


cin >> egg;
cout <<"\nTotal calories from eggs are " << egg*70;

cout << " \nhow much bread did you eat?\n";

cin >> bread;
cout  <<"\nTotal calories from bread are " << bread*100;

cout << "\n how much water did you drink?\n";

cin >> water;
cout  <<"\nTotal calories from water are " << water*0;


cout << "total calories are : " << egg*70 + bread*100 ;
return 0 ;






}
