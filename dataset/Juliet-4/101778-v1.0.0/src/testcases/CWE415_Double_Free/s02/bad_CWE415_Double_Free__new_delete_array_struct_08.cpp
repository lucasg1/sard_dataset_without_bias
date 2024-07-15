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
    twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = new twoIntsStruct[100];
        delete [] data;
    }
    if(FUN0())
    {
<START>
        delete [] data;
<END>
    }
}
} 
