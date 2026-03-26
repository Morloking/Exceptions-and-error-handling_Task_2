#include "my_exception.h"

my_namespace::MyException::MyException(const std::string& error) : std::domain_error(error) {}
