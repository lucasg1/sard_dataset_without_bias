namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    if(GLOBAL_CONST_TRUE)
    {
        {
            TwoIntsClass dataBuffer[100];
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
    printIntLine(data[0].intOne);
<START>
    delete [] data;
<END>
}
} 
