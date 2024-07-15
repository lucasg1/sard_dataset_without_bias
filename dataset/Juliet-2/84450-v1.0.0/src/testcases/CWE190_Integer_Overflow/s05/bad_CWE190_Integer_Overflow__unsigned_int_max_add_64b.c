void FUN0(void * dataVoidPtr);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    unsigned int data = (*dataPtr);
    {
<START>
        unsigned int result = data + 1;
<END>
        printUnsignedLine(result);
    }
}
