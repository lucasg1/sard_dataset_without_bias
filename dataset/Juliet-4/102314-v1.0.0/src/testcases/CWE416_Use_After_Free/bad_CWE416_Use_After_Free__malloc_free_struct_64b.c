void FUN0(void * dataVoidPtr);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    free(data);
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    twoIntsStruct * * dataPtr = (twoIntsStruct * *)dataVoidPtr;
    twoIntsStruct * data = (*dataPtr);
<START>
    printStructLine(&data[0]);
<END>
}
