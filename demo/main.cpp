#include <header.hpp>
#include <iostream>


int main() {
  std::string path("../misc/ftp");
  Filesystem test(path);
  std::cout << test;
}