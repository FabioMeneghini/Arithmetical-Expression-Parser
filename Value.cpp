#include "Value.h"

Value::Value(bool value): value(value) {}

void Value::print() {
    std::cout << (value ? "1" : "0");
}

bool Value::evaluate() {
    return value;
}