#pragma once
#include <stdexcept>
#include <string>

namespace my_namespace {
	class MyException :
		public std::domain_error {
	public:
		explicit MyException(const std::string& error);
	};
}

