#ifndef tp_validation_Globals_h
#define tp_validation_Globals_h

#include "tp_validation/Globals.h"

#ifndef TP_VALIDATION_SHARED_EXPORT
#if defined(TP_VALIDATION_LIBRARY)
#  define TP_VALIDATION_SHARED_EXPORT TP_EXPORT
#else
#  define TP_VALIDATION_SHARED_EXPORT TP_IMPORT
#endif
#endif

//##################################################################################################
//! A library of functions for validating user input.
namespace tp_validation
{

}

#endif
