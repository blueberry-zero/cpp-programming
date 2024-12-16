#include <iostream>
#include <string>

int main() {
  std::string greeting = "Hello world!";
  std::cout << greeting << "\n";

  // Create variables of different data types
  int items = 50;
  double cost_per_item = 9.99;
  double total_cost = items * cost_per_item;
  char currency = '$';

  // Print variables
  std::cout << "Number of items: " << items << "\n";
  std::cout << "Cost per item: " << cost_per_item << "" << currency << "\n";
  std::cout << "Total cost = " << total_cost << "" << currency << "\n";

  return 0;
}
