void FUN0(void * dataVoidPtr);
void FUN1()
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
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    twoIntsStruct * * dataPtr = (twoIntsStruct * *)dataVoidPtr;
    twoIntsStruct * data = (*dataPtr);
    printStructLine(&data[0]);
<START>
    free(data);
<END>
}
