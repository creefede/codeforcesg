#include <iostream>
#include <string>
int main() {
    int n;
    std::cin >> n;
    int ret = 0;
    std::string str;
    
    while (n--) { 
        std::cin >> str;
        if (str[1] == '+') {
            ret++;
        }
        else{
            ret--;
        } 
    }
    
    std::cout << ret;
    return 0;
}
