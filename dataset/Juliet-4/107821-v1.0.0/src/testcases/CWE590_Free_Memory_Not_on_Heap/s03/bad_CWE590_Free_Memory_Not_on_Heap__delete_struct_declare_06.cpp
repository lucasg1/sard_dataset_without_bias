static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    if(STATIC_CONST_FIVE==5)
    {
        {
            twoIntsStruct dataBuffer;
            dataBuffer.intOne = 1;
            dataBuffer.intTwo = 1;
            data = &dataBuffer;
        }
    }
    printStructLine(data);
<START>
    delete data;
<END>
}
} 
