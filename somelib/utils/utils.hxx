#pragma once

#include <iosfwd>
#include <string>

#include <utils/export.hxx>

namespace utils
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  UTILS_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
