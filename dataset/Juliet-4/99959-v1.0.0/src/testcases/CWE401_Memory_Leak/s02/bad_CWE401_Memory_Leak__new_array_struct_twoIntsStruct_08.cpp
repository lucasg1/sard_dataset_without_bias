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
    struct _twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = new struct _twoIntsStruct[100];
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(FUN0())
    {
<START>
<END>
        ; 
    }
}
} 
