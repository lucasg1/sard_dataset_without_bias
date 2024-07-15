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
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
} 
