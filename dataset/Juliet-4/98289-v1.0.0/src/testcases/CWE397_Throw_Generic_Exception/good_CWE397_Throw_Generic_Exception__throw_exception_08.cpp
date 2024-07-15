using namespace std; 
static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        throw range_error("Test");
    }
}
void FUN3()
{
    if(FUN0())
    {
        throw range_error("Test");
    }
}
} 
