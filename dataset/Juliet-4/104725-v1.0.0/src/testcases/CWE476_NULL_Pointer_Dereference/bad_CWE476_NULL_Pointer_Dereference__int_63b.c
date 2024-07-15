void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
<START>
    printIntLine(*data);
<END>
}
