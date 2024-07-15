using namespace std; 
namespace NAMESPACE0
{
void FUN0()
{
    if(globalFalse)
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
    if(globalTrue)
    {
        throw range_error("Test");
    }
}
} 
