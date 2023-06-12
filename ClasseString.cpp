#include <iostream>

class String{
    private:
        std::string string;
    public:
        String():
            string("")
        {}
        String(std::string string):
            string(string)
        {}
        void operator()(int n, char ch){
            if (n >= string.size() || n < 0)
            {
                return;
            }
            string[n] = ch;
        }
        operator std::string() const{
            return string;
        }
};

int main(){
    String string("TExto");
    std::cout << (std::string)string << (char)10;
    string(2,'9');
    std::cout << (std::string)string << (char)10;
    return 0;
}