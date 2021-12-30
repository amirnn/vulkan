#include <TriangleApp.h>


int main(int argc, char const *argv[])
{
    TriangleApp app;

    try
    {
        app.run();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
