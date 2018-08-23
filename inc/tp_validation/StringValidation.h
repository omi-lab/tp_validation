#ifndef tp_validation_StringValidation_h
#define tp_validation_StringValidation_h

#include "tp_validation/Globals.h"

#include <string>

namespace tp_validation
{
//##################################################################################################
std::string cleanAlphaNumericUnderscore(const std::string& input);

//##################################################################################################
std::string cleanAlphaNumericUnderscore(const std::string& input, char fill);

//##################################################################################################
std::string cleanAlphaNumericSpaceUnderscore(const std::string& input);

//##################################################################################################
std::string cleanAlphaNumericSpaceUnderscore(const std::string& input, char fill);
}

#endif
