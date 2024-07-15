namespace NAMESPACE0
{
void FUN0()
{
    int i;
    TwoIntsClass * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
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
