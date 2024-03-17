// コードを入力してください
#include "logger.hpp"

Logger::Logger() {};

void Logger::logMessage(const std::string& msg)  {
  this->msg = msg;
  std::cout << this->msg << std::endl;
}
