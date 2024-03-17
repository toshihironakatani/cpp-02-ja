// コードを入力してください
#pragma once
#include <iostream>

class Logger {
public:
  Logger();
  void logMessage(const std::string& msg);
private:
  std::string msg;
};
