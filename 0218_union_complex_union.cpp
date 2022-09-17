#include <bits/stdc++.h>
using namespace std;


enum class DataType {
    Int,
    Char
};

union Value {
    int num;
    char alphabet;
    Value() {}
    ~Value() {}
};

struct ComplexType {
    DataType dataType;
    Value value;
};

void DisplayComplexType(const ComplexType& obj) {

    switch(obj.dataType) {
        case DataType::Int:
            cout << "Union contains number: " << obj.value.num << endl;
            break;
        case DataType::Char:
            cout << "Union contains char: " << obj.value.alphabet << endl;
            break;
    }

}

int main() {

    ComplexType data1;
    data1.dataType = DataType::Char;
    DisplayComplexType(data1);

    ComplexType data2;
    data2.dataType = DataType::Char;
    data2.value.num = 'X';
    DisplayComplexType(data2);

    return 0;
}