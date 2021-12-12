#include <header.hpp>
#include <iostream>


int main() {
  // path  менять в зависимости от системы
  std::string path("../misc/ftp");
  Filesystem test(path);
  std::cout << test;
}