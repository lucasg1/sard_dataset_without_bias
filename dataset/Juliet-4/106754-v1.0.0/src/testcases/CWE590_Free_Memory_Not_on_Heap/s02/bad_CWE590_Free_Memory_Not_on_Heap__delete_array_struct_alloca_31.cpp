namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
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
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        printStructLine(&data[0]);
<START>
        delete [] data;
<END>
    }
}
} 
