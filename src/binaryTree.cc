#include "binaryTree.h"
#include <iostream>

namespace shape {

Rectangle::Rectangle(float w, float h) : w_(w), h_(h) {}

float Rectangle::GetSize() const { return w_ * h_; }

void Rectangle::Print() const {
  std::cout << "size : " << GetSize() << std::endl;
}

}  // namespace shape
