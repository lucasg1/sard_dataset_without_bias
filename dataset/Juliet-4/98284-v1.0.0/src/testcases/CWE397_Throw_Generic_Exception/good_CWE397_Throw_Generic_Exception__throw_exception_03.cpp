using namespace std; 
namespace NAMESPACE0
{
void FUN0()
{
    if(5!=5)
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
    if(5==5)
    {
        throw range_error("Test");
    }
}
} 
