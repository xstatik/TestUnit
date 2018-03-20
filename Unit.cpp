// UNIT.CPP - Unit class implementation

#include "Unit.h"
#include <iostream>
#include <string.h>

Unit::Unit()
{
  m_unitName[0] = '\0';
  m_unitId[0] = '\0';
  m_credits = 0;
}

Unit::Unit(const char *nam, const char *id,
                unsigned cred)
{
  strncpy(m_unitName, nam, UnitNameSize);
  strncpy(m_unitId, id, UnitIdSize);
  m_credits = cred;
}

unsigned Unit::GetCredits() const
{
  return m_credits;
}

void Unit::SetCredits( unsigned cred )
{
  m_credits = cred;
}

void Unit::GetUnitName(char *nam) const
{
    strncpy(nam, m_unitName, UnitNameSize);
}

void Unit::SetUnitName(const char *nam)
{
    strncpy(m_unitName, nam, UnitNameSize);
}

void Unit::GetUnitId(char *id) const
{
    strncpy(id, m_unitId, UnitIdSize);
}

void Unit::SetUnitId(const char *id)
{
    strncpy(m_unitId, id, UnitIdSize);
}

istream & operator >>( istream & input, Unit & U )
{
  input >> U.m_unitName >> U.m_unitId >> U.m_credits;
  return input;
}

ostream & operator <<( ostream & os, const Unit & U )
{
  os << "  Unit:  " << U.m_unitName << '\n'
     << "  Section: " << U.m_unitId << '\n'
     << "  Credits: " << U.m_credits << '\n';
  return os;
}
