void FUN0(void * dataVoidPtr);
void FUN1()
{
    int data;
    data = 0;
    data = 2;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    int data;
    data = 0;
    data = RAND32();
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * dataPtr = (int *)dataVoidPtr;
    int data = (*dataPtr);
    {
        data++;
        int result = data;
        printIntLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    int * dataPtr = (int *)dataVoidPtr;
    int data = (*dataPtr);
    if (data < INT_MAX)
    {
        data++;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
