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
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(FUN0())
    {
<START>
        delete data;
<END>
    }
}
} 
