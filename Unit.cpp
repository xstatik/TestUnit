// UNIT.CPP - Unit class implementation

#include "Unit.h"
#include <iostream>
#include <string>

Unit::Unit()
{
  m_unitName = "";
  m_unitId = "";
  m_credits = 0;
}

Unit::Unit(const string &nam, const string &id,
                unsigned cred)
{
  m_unitName = nam;
  m_unitId = id;
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

void Unit::GetUnitName(string &nam) const
{
    nam = m_unitName;
}

void Unit::SetUnitName(const string &nam)
{
    m_unitName = nam;
}

void Unit::GetUnitId(string &id) const
{
    id = m_unitId;
}

void Unit::SetUnitId(const string &id)
{
    m_unitId = id;
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
