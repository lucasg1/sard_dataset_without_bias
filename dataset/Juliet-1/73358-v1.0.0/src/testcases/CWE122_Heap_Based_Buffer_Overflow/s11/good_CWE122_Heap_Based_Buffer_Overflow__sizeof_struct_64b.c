void FUN0(void * dataVoidPtr);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(sizeof(*data));
    data->intOne = 1;
    data->intTwo = 2;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    twoIntsStruct * * dataPtr = (twoIntsStruct * *)dataVoidPtr;
    twoIntsStruct * data = (*dataPtr);
    printStructLine(data);
    free(data);
}
