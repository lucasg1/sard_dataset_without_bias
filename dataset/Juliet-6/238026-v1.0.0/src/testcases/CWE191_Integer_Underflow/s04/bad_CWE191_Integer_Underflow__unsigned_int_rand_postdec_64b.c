void FUN0(void * dataVoidPtr);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    unsigned int data = (*dataPtr);
    {
<START>
        data--;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
