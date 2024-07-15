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
    TwoIntsClass * data;
    data = NULL;
    if(FUN0())
    {
        data = new TwoIntsClass;
    }
    if(FUN0())
    {
<START>
        free(data);
<END>
    }
}
} 
