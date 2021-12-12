#include <header.hpp>
#include <iostream>


int main() {
  // path  менять в зависимости от системы
  std::string path("/home/spertis/Desktop/labC++/lab4/misc/ftp");
  Filesystem test(path);
  std::cout << test;
}