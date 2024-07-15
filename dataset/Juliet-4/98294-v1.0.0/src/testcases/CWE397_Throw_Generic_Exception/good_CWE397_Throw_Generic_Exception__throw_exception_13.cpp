using namespace std; 
namespace NAMESPACE0
{
void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        throw range_error("Test");
    }
}
} 
