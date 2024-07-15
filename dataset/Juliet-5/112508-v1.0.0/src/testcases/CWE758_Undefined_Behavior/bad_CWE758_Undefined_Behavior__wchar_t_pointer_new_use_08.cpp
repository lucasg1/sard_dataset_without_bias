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
    if(FUN0())
    {
        {
            wchar_t * * pointer = new wchar_t *;
<START>
            wchar_t * data = *pointer; 
<END>
            delete pointer;
            printWLine(data);
        }
    }
}
} 
