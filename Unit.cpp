// UNIT.CPP - Unit class implementation

#include "Unit.h"

using namespace std;

Unit::Unit()
{
    m_credits = 0;
    m_unitId = "";
    m_unitName = "";
}

Unit::Unit(const string &nam, const string &id, unsigned cred)
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
