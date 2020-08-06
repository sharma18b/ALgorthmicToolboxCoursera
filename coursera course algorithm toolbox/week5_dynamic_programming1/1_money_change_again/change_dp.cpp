#include <iostream>

int get_change(int m) {
    if (m<=2) return m;
  if (m%4==0) return m/4;
  else if (m%4==2) return (m-6)/4 + 2;
  else if (m%4==1) return (m-1)/4 + 1;
  else if (m%4==3) return m/4 + 1;
  return m / 4;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
