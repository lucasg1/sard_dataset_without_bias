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
            twoIntsStruct dataBuffer[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i].intOne = 1;
                    dataBuffer[i].intTwo = 1;
                }
            }
            data = dataBuffer;
        }
    }
    printStructLine(&data[0]);
<START>
    delete [] data;
<END>
}
} 
