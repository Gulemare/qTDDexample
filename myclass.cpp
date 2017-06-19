// Declaration of your class
#include "myclass.h"
namespace tddexample {

bool MyClass::compare(int first, int second) {
    return first == second;
}

int MyClass::abs(int n) {
    return n >= 0 ? n : -n;
}

} // namespace tddexample
