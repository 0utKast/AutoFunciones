/*int sumar(int x, int y)
{
    return x + y;
}*/


/*auto sumar(int x, int y)
{
    return x + y;
}*/


/*auto ejemplo(bool b)
{
    if (b)
        return 5; // return tipo int
    else
        return 6.7; // return tipo double
}*/


/*#include <iostream>

auto ejemplo();

int main()
{
    std::cout << ejemplo(); // el compilador solo ha visto 
                            // una declaración anticipada
    return 0;
}

auto ejemplo()
{
    return 5;
}*/


/*//C++ 11
template<typename Lhs, typename Rhs>
auto add(const Lhs& lhs, const Rhs& rhs) -> decltype(lhs + rhs) {
    return lhs + rhs;
}


template<typename Lhs, typename Rhs>
decltype(lhs + rhs) add(const Lhs& lhs, const Rhs& rhs) {
    // error: ^^^ 'lhs' and 'rhs' no han sido declaradas en este alcance
    return lhs + rhs;
}*/



/*int add(int x, int y)
{
    return (x + y);
}

//desde C++11
auto add(int x, int y) -> int
{
    return (x + y);
}*/

/*#include <string>
int main()
{

    auto add(int x, int y) -> int;
    auto divide(double x, double y) -> double;
    auto printSomething() -> void;
    auto generateSubstring(const std::string & s, int start, int len)->std::string;
}*/

#include <iostream>

void sumaEImprime(auto x, auto y)
{
    std::cout << x + y <<"\n";
}

int main()
{
    sumaEImprime(2, 3); // caso 1: llama a sumaEImprime 
                        //con parámetros int
    sumaEImprime(4.5, 6.7); // caso 2: llama a sumaEImprime 
                            //con parámetros double
}






