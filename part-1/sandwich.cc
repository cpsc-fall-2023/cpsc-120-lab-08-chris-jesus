// Christopher Lau
// chrislau@csu.fullerton.edu
// @ChrisLCSU
// Partners:

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> args(argv, argv + argc);
  if (args.size() != 4) {
    std::cout << "Error: You must supply three arguments\n ";
    return 1;
  }
  std::string cmd{args.at(0)};
  std::string protein_type{args.at(1)};
  std::string bread_type{args.at(2)};
  std::string condiment_type{args.at(3)};
  std::cout << "Your order: A " << protein_type << " sandwich on " << bread_type
            << " with " << condiment_type << ".\n ";
  return 0;
}