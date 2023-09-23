#include <iostream>
#include <string>
#include <algorithm>

/*
1) � �++ strlen() = � � size()
���������� ������ �������
2) � �++ strcpy() = � � assign() 
�������� ������� ������� ������ � ������
3) � �++ strcmp() = � � compare()
���������� ��� ������ 
4) � �++ strcat() = � � append()
��������� ������� ����� ������ � ����� ������
5) � �++ someString[index]() = � � at(index)
������� � ������� ��������� ������ ������
6) � �++ push_back() ����, � � ���
����� �������� ������ � ����� �������
7) � �++ pop_back() ����, � � ���
����� �������� ������ � ������ �������
*/

int main() {
    std::string str;
    std::cout << "Vvedite stroku: ";
    std::getline(std::cin, str);

    // �������� �������� � ������ ����������
    str.erase(std::remove_if(str.begin(), str.end(), [](char c) {
        return std::isspace(c) || std::ispunct(c);
        }), str.end());

    // ���������� ���� � ���������� �������
    std::sort(str.begin(), str.end());

    std::cout << "Result: " << str << std::endl;

    return 0;
}