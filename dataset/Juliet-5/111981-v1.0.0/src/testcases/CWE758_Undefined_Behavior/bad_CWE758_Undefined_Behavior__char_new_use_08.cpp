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
            char * pointer = new char;
<START>
            char data = *pointer; 
<END>
            delete pointer;
            printHexCharLine(data);
        }
    }
}
} 
