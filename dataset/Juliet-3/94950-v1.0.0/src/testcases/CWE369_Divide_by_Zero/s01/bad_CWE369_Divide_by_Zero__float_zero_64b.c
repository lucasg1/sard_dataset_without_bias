void FUN0(void * dataVoidPtr);
void FUN1()
{
    float data;
    data = 0.0F;
    data = 0.0F;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    float * dataPtr = (float *)dataVoidPtr;
    float data = (*dataPtr);
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
