using namespace std; 
namespace NAMESPACE0
{
void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        throw range_error("Test");
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        throw range_error("Test");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
