#ifndef ADEPT_VARIANT_HPP
#define ADEPT_VARIANT_HPP

#include <boost/variant.hpp>

#include "date.hpp"

namespace adept {
	using variant = boost::variant<bool, int, long, date, double, std::string, const char*, std::wstring>;
}


#endif
