#include "rng.h"

std::mt19937 RNG::m_mt = std::mt19937(0);

int RNG::uniform_int(int n) {
  std::uniform_int_distribution<int> u(0, n - 1);
  return u(m_mt);
}

int RNG::uniform_int() { return m_mt(); }

bool RNG::uniform_bool() { return m_mt() & 1 ? true : false; }
