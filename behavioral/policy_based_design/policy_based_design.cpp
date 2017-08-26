#include <iostream>

template <typename T>
class DivisionPolicy {
public:
    T perform(const T& first, const T& second);
};

template <typename T>
T DivisionPolicy<T>::perform(const T& first, const T& second) {
    return first / second;
}

template <typename T>
class MultiplicationPolicy {
public:
    T perform(const T& first, const T& second);
};

template <typename T>
T MultiplicationPolicy<T>::perform(const T& first, const T& second) {
    return first * second;
}

template <typename T>
class AdditionPolicy {
public:
    T perform(const T& first, const T& second);
};

template <typename T>
T AdditionPolicy<T>::perform(const T& first, const T& second) {
    return first + second;
}

template <typename T, template <typename> typename OperationPolicy>
class BinaryOperation: public OperationPolicy<T> {};

int main() {

    BinaryOperation<int, AdditionPolicy> int_addition;
    std::cout << "Additition perform = " << int_addition.perform(2, 3) << std::endl;

    BinaryOperation<float, MultiplicationPolicy> float_multipliaction;
    std::cout << "Multiplication perform = " << float_multipliaction.perform(2.f, 3.f) << std::endl;

    BinaryOperation<double , DivisionPolicy> double_division;
    std::cout << "Division perform = " << double_division.perform(2.0, 3.0) << std::endl;

    return 0;
}