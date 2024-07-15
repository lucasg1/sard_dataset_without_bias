using namespace std; 
namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        throw range_error("Test");
    }
}
} 
