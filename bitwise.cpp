#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 5 in binary: 00000101
    int b = 3;  // 3 in binary: 00000011

    // Bitwise AND
    int andResult = a & b;  // 00000101 & 00000011 = 00000001
    cout << "AND: " << andResult << endl;  // Outputs 1

    // Bitwise OR
    int orResult = a | b;  // 00000101 | 00000011 = 00000111
    cout << "OR: " << orResult << endl;  // Outputs 7

    // Bitwise XOR
    int xorResult = a ^ b;  // 00000101 ^ 00000011 = 00000110
    cout << "XOR: " << xorResult << endl;  // Outputs 6

    // Bitwise NOT
    int notResult = ~a;  // ~00000101 = 11111010 (two's complement representation of -6)
    cout << "NOT: " << notResult << endl;  // Outputs -6

    // Left Shift
    int leftShift = a << 1;  // 00000101 << 1 = 00001010
    cout << "Left Shift: " << leftShift << endl;  // Outputs 10

    // Right Shift
    int rightShift = a >> 1;  // 00000101 >> 1 = 00000010
    cout << "Right Shift: " << rightShift << endl;  // Outputs 2

    return 0;
}
