namespace NAMESPACE0
{
void FUN0()
{
    int i;
    twoIntsStruct * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        {
            twoIntsStruct * dataBuffer = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
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
