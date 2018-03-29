// Unit.H - Unit class definition
// author Wade Davidson
// Now using TortoiseSVN for version mangement.

#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string>

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
    * @author Wade Davidson
    * @version 06
    * @date 20/03/2018 Wade Davidson, added test plan and tested.
    *
    * @author Wade Davidson
    * @version 07
    * @date 29/03/2018 Wade Davidson, changed c-strings to string objects, changed test plan and tested.
    *
    * @author Wade Davidson
    * @version 08
    * @date 29/03/2018 Wade Davidson, changed istream function to allow for spaces in strings.
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
        /**
        * @brief  Default constructor
        * @param
        * @return
        * @pre
        * @post
        */
    Unit();
        /**
        * @brief  Constructor with parameters
        * @param  char*, char*, unsigned
        * @return
        * @pre
        * @post m_unitName = nam, m_unitId = id, credits = cred
        */
    Unit(const string &nam, const string &id, unsigned cred);
        /**
        * @brief  Returns credit variable
        * @param
        * @return unsigned
        * @pre
        * @post
        */
    unsigned GetCredits() const;
        /**
        * @brief  Sets credit variable
        * @param  unsigned
        * @return void
        * @pre
        * @post credit is set to cred
        */
    void SetCredits(unsigned cred);
        /**
        * @brief  Gets m_unitName variable
        * @param  string
        * @return void
        * @post sets nam to m_unitName
        */
    void GetUnitName(string &id) const;
        /**
        * @brief  Sets m_unitName variable
        * @param  string
        * @return void
        * @post m_unitName is set to nam
        */
    void SetUnitName(const string &nam);
        /**
        * @brief  Gets m_unitId variable
        * @param  string
        * @return void
        * @post sets id to m_unitId
        */
    void GetUnitId(string &id) const;
        /**
        * @brief  Sets m_unitId variable
        * @param  string
        * @return void
        * @post m_unitId is set to id
        */
    void SetUnitId(const string &id);
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
        string m_unitName;
        string m_unitId;
        unsigned  m_credits;
};

#endif
