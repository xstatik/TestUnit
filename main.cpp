#include <iostream>
#include "Unit.h"

using namespace std;

int main()
{
    char testString[1000];
    unsigned testNumber;
    Unit newUnit;
    Unit anotherUnit("Data_Structures", "ICT289", 5);

    cout << newUnit << endl << anotherUnit << endl;

    anotherUnit.SetCredits(666);
    cout << anotherUnit.GetCredits() << endl;

    anotherUnit.SetUnitName("Databases_and_Stuff");
    anotherUnit.GetUnitName(testString);
    cout << endl << testString << endl;

    anotherUnit.SetUnitId("TestID");
    anotherUnit.GetUnitId(testString);
    cout << endl << testString << endl;

    cout << anotherUnit << endl;

    return 0;
}
