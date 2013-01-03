//tego pliku nie wolno modyfikować
#pragma once

namespace oop{
struct test_pod{test_pod(int a = 0) : a(a){} int a;}; //typ POD

struct test_non_pod{ //typ nie POD
  ~test_non_pod(){}
  test_non_pod(int a = 0) : a(a){} int a;
};
}
