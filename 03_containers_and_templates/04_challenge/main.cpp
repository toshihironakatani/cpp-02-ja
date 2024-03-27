#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
  //名前と電話番号をmapに追加します。
  std::cout << "== creat phone book ==" << std::endl;
  std::ifstream in;
  in.open("phone_lis.txt");
  if (!in) {
    std::cerr << "Error file does not exist." << std::endl;
    return 0;
  }
  std::map<std::string, std::string> phone_book;

  while(true) {
    if (in.eof()){
      break;
    }
    std::string line;
    std::getline(in, line);

    std::stringstream ss{line};
    std::string name, number;
    getline(ss, name, ',');
    getline(ss, number, ',');

    if (number.size() >= 1){
      phone_book[name] = number;
    }
  }

  for (const auto& [key, value]: phone_book) {
    std::cout << key << ": " << value << std::endl;
  }

  phone_book["Endo"] = "03-0123-004";

  in.close();

  //名前とそれに紐づく電話番号をmapから削除します。
  std::cout << "== delete key ==" << std::endl;
  std::string key_del = "Tana";

  if (phone_book.count(key_del) == 1) {
    phone_book.erase(key_del);
    for (const auto& [key, value]: phone_book) {
      std::cout << key << ": " << value << std::endl;
    }
  }
  else {
    std::cout << "not exist" << std::endl;
  }

  //特定の名前で電話番号を検索します。
  std::cout << "== find number ==" << std::endl;
  std::string search_name = "Tanak";
  if (phone_book.count(search_name) == 1) {
    std::string number = phone_book[search_name];
    std::cout << number << std::endl;
  }
  else {
    std::cout << "not exist" << std::endl;
  }

  //すべての名前と電話番号をアルファベット順に表示します。
  std::cout << "== show all ==" << std::endl;
  for (const auto& [key, value]: phone_book) {
    std::cout << key << ": " << value << std::endl;
  }

  return 0;

}
