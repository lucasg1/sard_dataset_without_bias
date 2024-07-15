void FUN0(void * dataVoidPtr);
void FUN1()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    unsigned int data = (*dataPtr);
    {
<START>
        data++;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
