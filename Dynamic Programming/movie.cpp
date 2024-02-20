#include <iostream>
#include <vector>
#include <string>

std::string convertToBinary(const std::string &str)
{
    std::string convertedStr = str;
    for (char &c : convertedStr)
    {
        if (c == 'Y')
        {
            c = '1';
        }
        else if (c == 'K')
        {
            c = '0';
        }
    }
    return convertedStr;
}

void printIn8BitChunks(const std::string &str)
{
    int len = str.length();
    int chunkSize = 8;

    for (int i = 0; i < len; i += chunkSize)
    {
        std::string chunk = str.substr(i, chunkSize);
        std::cout << chunk << " ";
    }
}

int main()
{
    std::vector<std::string> a = {
        "YKKKKYYY", "YKYYYYKK", "YKYKYKYY", "YKYYYKKY", "YKKKKYKK", "YKKKKYKY",
        "YYKKYYKK", "YKKKYYKY", "YYKKYYYY", "YKYKKKKK", "YYKKYYYY", "YKKYKKKY",
        "YYKKYYKK", "YKYKKKKK", "YKKKKYKY", "YYKKYYKK", "YKKKYYKY", "YYKKYYYY",
        "YKYKKKKK", "YYKKYYYY", "YKKYKKKY", "YYKKYYKK", "YKKKKKYK"};

    std::cout << "Original array:\n";
    for (const auto &str : a)
    {
        std::cout << str << "\n";
    }

    std::cout << "\nConverted and printed in 8-bit chunks:\n";
    for (const auto &str : a)
    {
        std::string convertedStr = convertToBinary(str);
        printIn8BitChunks(convertedStr);
        std::cout << "\n";
    }

    return 0;
}
