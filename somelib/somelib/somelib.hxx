#pragma once

#include <iosfwd>
#include <string>

#include <somelib/export.hxx>

namespace somelib
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  SOMELIB_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
