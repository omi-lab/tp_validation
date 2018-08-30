#include "tp_validation/StringValidation.h"

namespace tp_validation
{

//##################################################################################################
std::string cleanAlphaNumericUnderscore(const std::string& input)
{
  std::string result;
  result.reserve(input.size());

  const char* d = input.data();
  const char* dMax = d+input.size();
  for(; d<dMax; d++)
  {
    char c = *d;
    if((c>='0' && c<='9') ||
       (c>='a' && c<='z') ||
       (c>='A' && c<='Z') ||
       (c=='_'))
      result.push_back(c);
  }

  return result;
}
//##################################################################################################
std::string cleanAlphaNumericUnderscore(const std::string& input, char fill)
{
  std::string result;
  result.reserve(input.size());

  const char* d= input.data();
  const char* dMax = d+input.size();
  for(; d<dMax; d++)
  {
    char c = *d;
    if((c>='0' && c<='9') ||
       (c>='a' && c<='z') ||
       (c>='A' && c<='Z') ||
       (c=='_'))
      result.push_back(c);
    else
      result.push_back(fill);
  }

  return result;
}

//##################################################################################################
std::string cleanAlphaNumericSpaceUnderscore(const std::string& input)
{
  std::string result;
  result.reserve(input.size());

  const char* d= input.data();
  const char* dMax = d+input.size();
  for(; d<dMax; d++)
  {
    char c = *d;
    if((c>='0' && c<='9') ||
       (c>='a' && c<='z') ||
       (c>='A' && c<='Z') ||
       (c=='_')           ||
       (c==' '))
      result.push_back(c);
  }

  return result;
}
//##################################################################################################
std::string cleanAlphaNumericSpaceUnderscore(const std::string& input, char fill)
{
  std::string result;
  result.reserve(input.size());

  const char* d= input.data();
  const char* dMax = d+input.size();
  for(; d<dMax; d++)
  {
    char c = *d;
    if((c>='0' && c<='9') ||
       (c>='a' && c<='z') ||
       (c>='A' && c<='Z') ||
       (c=='_')           ||
       (c==' '))
      result.push_back(c);
    else
      result.push_back(fill);
  }

  return result;
}
}
