using namespace std; 
namespace NAMESPACE0
{
void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        throw range_error("Test");
    }
}
void FUN1()
{
    if(1)
    {
        throw range_error("Test");
    }
}
} 
