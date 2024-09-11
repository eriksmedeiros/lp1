#include <iostream>
#include <fstream>

int main()
{
    std::ifstream file("exemple.txt");
    std::string content;

    if(!file.is_open()) 
    {
        std::cout << "Erro ao abrir o arquivo!" << std::endl;
        return 1;
    }

    if(file.peek() == std::ifstream::traits_type::eof())
    {
        std::cout << "Arquivo vazio!" << std::endl;
        return 1;
    }

    std::getline(file, content);
    std::cout << content << std::endl;
    file.close();
    return 0;
}