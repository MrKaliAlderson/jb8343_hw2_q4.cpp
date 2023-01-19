#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    int intOne;
    int intTwo;
    
    cout << "Please enter two positive integers, separated by a space: ";
    cin >> intOne >> intTwo;
    

    cout << intOne + intTwo << endl
        << intOne - intTwo << endl
        << intOne * intTwo << endl
        << (double)intOne / (double)intTwo
        << intOne / intTwo << endl
        << intOne % intTwo << endl;

    return 0;
         

}
