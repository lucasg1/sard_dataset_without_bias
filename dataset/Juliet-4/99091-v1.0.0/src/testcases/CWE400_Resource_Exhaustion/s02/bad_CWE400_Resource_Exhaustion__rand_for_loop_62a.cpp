namespace NAMESPACE0
{
void FUN0(int &count)
{
    count = RAND32();
}
} 
namespace NAMESPACE0
{
void FUN0(int &count);
void FUN2()
{
    int count;
    count = -1;
    FUN0(count);
    {
        size_t i = 0;
<START>
        for (i = 0; i < (size_t)count; i++)
<END>
        {
            printLine("Hello");
        }
    }
}
} 
