#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file("exemple.txt");
    file << "Hello, File!" << std::endl;
    file.close();
    return 0;
}