namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int FUN0(int data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    VAR1 = 0; 
    data = FUN0(data);
    {
        size_t dataBytes,i;
        int *intPointer;
        dataBytes = data * sizeof(int); 
        intPointer = (int*)new char[dataBytes];
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        delete [] intPointer;
    }
    ;
}
static int FUN2(int data)
{
    if(VAR2)
    {
        data = 20;
    }
    return data;
}
void FUN3()
{
    int data;
    data = -1;
    VAR2 = 1; 
    data = FUN2(data);
    {
        size_t dataBytes,i;
        int *intPointer;
        dataBytes = data * sizeof(int); 
        intPointer = (int*)new char[dataBytes];
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        delete [] intPointer;
    }
    ;
}
} 
