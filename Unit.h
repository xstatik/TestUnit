// Unit.H - Unit class definition
// author Wade Davidson
// Now using TortoiseSVN for version mangement.

#ifndef UNIT_H
#define UNIT_H

#include <iostream>

using namespace std;

    /**
    * @class Unit
    * @brief  Store info about Unit
    *
    *
    *
    *
    * @author KRI
    * @version 01
    * @date 26/09/2007 KRI, Started
    *
    * @author Wade Davidson
    * @version 02
    * @date 13/03/2018 Wade Davidson, Added more comments
    *
    * @author Wade Davidson
    * @version 03
    * @date 14/03/2018 Wade Davidson, Rename this class to Unit
    *
    * @author Wade Davidson
    * @version 04
    * @date 14/03/2018 Wade Davidson, changed variables and added setters and getters
    *
    *
    * @author Wade Davidson
    * @version 05
    * @date 17/03/2018 Wade Davidson, removed inline functions.
    *
    * @todo Remove friend functions
    *
    * @bug My program has no bugs. Well, maybe it has...
    * @bug The program didn't make my cofee right.
    */

const unsigned UnitNameSize = 100;
const unsigned UnitIdSize = 7;

class Unit {
public:
    Unit();
    Unit(const char *nam, const char *id, unsigned cred);
        // Construct a Unit from a name, section letter,
        // and number of credits.
        /**
        * @brief  Returns credit variable
        * @param  none
        * @return unsigned
        * @pre none
        * @post none
        */
    unsigned GetCredits() const;
        /**
        * @brief  Sets credit variable
        * @param  unsigned
        * @return void
        * @pre none
        * @post credit is set to cred
        */
    void SetCredits(unsigned cred);
        /**
        * @brief  Gets m_unitName variable
        * @param  unsigned
        * @return void
        * @pre none
        * @post none
        */
    void GetUnitName(char *nam) const;
        /**
        * @brief  Sets m_unitName variable
        * @param  char *
        * @return void
        * @pre none
        * @post m_unitName is set to nam
        */
    void SetUnitName(const char *nam);
        /**
        * @brief  Gets m_unitId variable
        * @param  char *
        * @return void
        * @pre none
        * @post none
        */
    void GetUnitId(char *id) const;
        /**
        * @brief  Sets m_unitId variable
        * @param  char *
        * @return void
        * @pre none
        * @post m_unitId is set to id
        */
    void SetUnitId(const char *id);
        /**
        * @brief  overloads ostream operator
        * @param  ostream &, Unit &
        * @return ostream &
        * @pre none
        * @post none
        */
    friend ostream & operator <<(ostream &os, const Unit &C);
        /**
        * @brief  overloads istream operator
        * @param  ostream &, Unit &
        * @return ostream &
        * @pre none
        * @post none
        */
    friend istream & operator >>(istream &input, Unit &C);

private:
        char m_unitName[UnitNameSize+1];        // Unit name, C style string. not a C++ string object
        char m_unitId[UnitIdSize+1];            // C-style string for the unit ID.
        unsigned  m_credits;                  // number of credits
};

#endif
