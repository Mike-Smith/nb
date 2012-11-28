#include <iostream>

int main(int argc, char * argv[])
{
    std::cout<<"hello git\n";
    int i;
    for(i=0;i<argc;i++)
        std::cout<<argv[i]<<'\n';
    return 0;
}
