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
        {
            char buffer[sizeof(twoIntsStruct)];
            twoIntsStruct * dataBuffer = new(buffer) twoIntsStruct;
            dataBuffer->intOne = 1;
            dataBuffer->intTwo = 1;
            data = dataBuffer;
        }
    }
    printStructLine(data);
<START>
    delete data;
<END>
}
} 
