#include <iostream>

class Address { public:
    const char *street;
    int building;
    Address(const char *s):street(s), building(6){}
};

class Person { public: Address *address; };

int main(int argc, char **argv)
{
    Address *address = new Address("5thAvenue");
    address->building = 20;
    Person *person = new Person();
    person->address = address;
    std::cout << "OK PERSON\n";
    return 0;
}
