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
    TwoIntsClass data;
    if(FUN0())
    {
        ; 
    }
    if(FUN0())
    {
<START>
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
<END>
    }
}
} 
