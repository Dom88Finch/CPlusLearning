#include <iostream>


namespace first{
    int x = 1;
}
namespace second{
    int x = 1000;
} // namespace name

int main() {

    
    // provides solution for preventing name conflicts

    int x = 0;
    // int x = 1;

    // default one that is shown is the one on the main function
    std::cout << x << '\n';
    // can access the other x by setting the name of the namespace before calling it below
    std::cout << first::x << '\n';
    
    // alternative method woudl be to use 'using namespace ___;
    /*
    using namespace second;
    std::cout << x << '\n';
    */




}