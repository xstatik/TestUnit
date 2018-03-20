#include <iostream>
#include "Unit.h"

using namespace std;

int main()
{
        //TEST01
//----------------------------------------------------------------
    Unit testUnit01;
    char testUnitName[500], testUnitID[500];

    testUnit01.GetUnitName(testUnitName);
    testUnit01.GetUnitId(testUnitID);

    cout << testUnitName << endl << testUnitID << endl << testUnit01.GetCredits() << endl;
//-----------------------------------------------------------------
        //TEST02
//-----------------------------------------------------------------
    Unit testUnit02("Data_Stucrures", "ICT283", 3);

    testUnit02.GetUnitName(testUnitName);
    testUnit02.GetUnitId(testUnitID);

    cout << testUnitName << endl << testUnitID << endl << testUnit02.GetCredits() << endl;
//--------------------------------------------------------------------
        //TEST03 && TEST04
//--------------------------------------------------------------------
    Unit testUnit03;

    testUnit03.SetCredits(1);
    cout << testUnit03.GetCredits() << endl;
//---------------------------------------------------------------------
        //TEST05 && TEST06
//---------------------------------------------------------------------
    Unit testUnit05;

    testUnit05.SetUnitName("Databases");
    testUnit05.GetUnitName(testUnitName);

    cout << testUnitName << endl;
//----------------------------------------------------------------------
        //TEST07 && TEST08
//----------------------------------------------------------------------
    Unit testUnit06;

    testUnit06.SetUnitId("BSC203");
    testUnit06.GetUnitId(testUnitID);

    cout << testUnitID << endl;
//----------------------------------------------------------------------

    return 0;
}
