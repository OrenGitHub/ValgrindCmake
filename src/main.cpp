#include <iostream>

class Address { public:
    std::string street;
    int building;
    Address(const std::string &s):street(s), building(6){}
};

int main(int argc, char **argv)
{
    Address *address = new Address("5thAvenue");
    address->building = 20;
    std::cout << "OK PERSON\n";
    return 0;
}
