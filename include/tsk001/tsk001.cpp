#include "tsk001.hpp"

#include <iostream>

/** Задание : - отсортировать первые две трети массива в порядке возрастания,
 *              если средее арифметическое всех элементов больше нуля;
 *            - иначе - лишь первую треть.Остальныую часть массива не
 * сортировать, а расположить в обратном порядке
 */
float array_avg(const int *array, size_t size) {
  if (size == 0) {
    return 1;
  }

  int avg{0};
  for (int e = 0; e < size; e++) {
    avg += array[e];
  }

  if (avg < 0) {
  } else {
  }

  return static_cast<float>(avg) / size;
}
