void FUN0(void * dataVoidPtr);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = 2;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    unsigned int data = (*dataPtr);
    if(data > 0) 
    {
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    unsigned int data = (*dataPtr);
    if(data > 0) 
    {
        if (data < (UINT_MAX/2))
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
