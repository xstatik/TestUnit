#include "Unit.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
        //TEST01
//----------------------------------------------------------------
    Unit testUnit01;
    string testUnitName, testUnitID;

    testUnit01.GetUnitName(testUnitName);
    testUnit01.GetUnitId(testUnitID);

    cout << testUnitName << endl << testUnitID << endl << testUnit01.GetCredits() << endl;

    cout << endl << "***************END OF TEST 01**************" << endl;
//-----------------------------------------------------------------
        //TEST02
//-----------------------------------------------------------------
    Unit testUnit02("Data Stuctures", "ICT283", 3);

    testUnit02.GetUnitName(testUnitName);
    testUnit02.GetUnitId(testUnitID);

    cout << testUnitName << endl << testUnitID << endl << testUnit02.GetCredits() << endl;

    cout << endl << "***************END OF TEST 02**************" << endl;
//--------------------------------------------------------------------
        //TEST03
//--------------------------------------------------------------------
    Unit testUnit03;

    testUnit03.SetCredits(1);
    cout << testUnit03.GetCredits() << endl;

    cout << endl << "***************END OF TEST 03**************" << endl;
//---------------------------------------------------------------------
        //TEST04
//---------------------------------------------------------------------
    Unit testUnit05;

    testUnit05.SetUnitName("Databases");
    testUnit05.GetUnitName(testUnitName);

    cout << testUnitName << endl;

    cout << endl << "***************END OF TEST 04**************" << endl;
//----------------------------------------------------------------------
        //TEST05
//----------------------------------------------------------------------
    Unit testUnit06;

    testUnit06.SetUnitId("BSC203");
    testUnit06.GetUnitId(testUnitID);

    cout << testUnitID << endl;

    cout << endl << "***************END OF TEST 05**************" << endl;
//----------------------------------------------------------------------

    return 0;
}
