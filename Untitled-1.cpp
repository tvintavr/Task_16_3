#include <iostream>
#include <climits>
#include <iomanip>


int main() {
  
  std::string buffer;
  std::cin>>buffer;
  std::stringstream buffer_stream(buffer);
  float a;
  float b;
char operation;
  buffer_stream >> a >> operation >> b;
  
    if (operation=='/' && b==0) {
        std::cout<<"infinity"<<'\n';
        std::cout<<"check if correct input"<<'\n';
        return 0;
    } else if (b==0) {
        std::cout<<"check if correct input"<<'\n';
    }

    if (operation=='/') {
        std::cout<<a/b<<'\n';
    } else if (operation=='*') {
        std::cout<<a*b<<'\n';
    } else if (operation=='-') {
        std::cout<<a-b<<'\n';
    } else if (operation=='+') {
        std::cout<<a+b<<'\n';
    } else {
        std::cout<<"incorrect input"<<'\n';
    }

  
  
  

  
}