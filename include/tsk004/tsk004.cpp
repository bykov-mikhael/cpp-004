#include "tsk004.hpp"

int tsk004(int x, int y) {
  int result{1};
  for (int i = 1; i <= y; i++) {
    result *= x;
  }
  return result;
}