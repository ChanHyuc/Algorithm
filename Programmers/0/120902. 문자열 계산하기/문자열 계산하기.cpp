#include <string>
#include <sstream>
#include <vector>

using namespace std;

int solution(string my_string) {
stringstream ss(my_string);
    int result, num;
    char op;

    ss >> result;

    while (ss >> op >> num) {
        if (op == '+') {
            result += num;
        } else {
            result -= num;
        }
    }

    return result;
}