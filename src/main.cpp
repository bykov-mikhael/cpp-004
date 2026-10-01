#include <algorithm>
#include <iostream>

int main() {
  int size001;
  int size002;
  int size003;

  std::cout << "size001 ";
  std::cin >> size001;

  std::cout << std::endl;

  std::cout << "size002 ";
  std::cin >> size002;

  int *array001 = new int[size001];

  for (int i = 0; i < size001; i++) {
    *(array001 + i) = rand() % 3 + 1;  //(max-min+1)+min => -1 1
  }

  int *array002 = new int[size002];

  for (int i = 0; i < size002; i++) {
    *(array002 + 1) = rand() % 3 + 1;
  }

  // for (int i = 0; i < size001; i++) {
  //   for (int k = 1; k < size002 - 1; k++) {
  //     if (*(array001 + i) == (*(array002 + k))) {
  //       size003++;
  //       // *(array003 + i) = *(array001 + i);
  //       // duplicate = !duplicate;
  //     }
  //   }
  //   // duplicate = !duplicate;
  // }

  size003 = std::min(size001, size002);

  int *array003 = new int[size003];

  for (int j = 0; j < size003; j++) {
    for (int i = 0; i < size001; i++) {
      for (int k = 0; k < size002; k++) {
        if (*(array001 + i) == (*(array002 + k))) {
          *(array003 + j) = *(array001 + i);
          // *(array003 + i) = *(array001 + i);
          // duplicate = !duplicate;
        }
      }
      // duplicate = !duplicate;
    }
  }

  for (int i = 0; i < size001; i++) {
    std::cout << *(array001 + i) << " ";
  }

  std::cout << std::endl;

  for (int i = 0; i < size002; i++) {
    std::cout << *(array002 + i) << " ";
  }

  std::cout << std::endl;

  for (int i = 0; i < size003; i++) {
    std::cout << *(array003 + i) << " ";
  }

  delete[] array001;
  delete[] array002;
  delete[] array003;

  return 0;
}

// int a;
// int *ptr_a = &a;