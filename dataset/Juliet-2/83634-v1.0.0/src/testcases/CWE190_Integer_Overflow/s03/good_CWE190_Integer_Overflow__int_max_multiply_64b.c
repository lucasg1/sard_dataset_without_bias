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
    data = INT_MAX;
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * dataPtr = (int *)dataVoidPtr;
    int data = (*dataPtr);
    if(data > 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    int * dataPtr = (int *)dataVoidPtr;
    int data = (*dataPtr);
    if(data > 0) 
    {
        if (data < (INT_MAX/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
