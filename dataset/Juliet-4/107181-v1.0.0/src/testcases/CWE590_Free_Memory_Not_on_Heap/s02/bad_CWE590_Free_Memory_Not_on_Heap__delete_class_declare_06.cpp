static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    if(STATIC_CONST_FIVE==5)
    {
        {
            TwoIntsClass dataBuffer;
            dataBuffer.intOne = 1;
            dataBuffer.intTwo = 1;
            data = &dataBuffer;
        }
    }
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
} 
