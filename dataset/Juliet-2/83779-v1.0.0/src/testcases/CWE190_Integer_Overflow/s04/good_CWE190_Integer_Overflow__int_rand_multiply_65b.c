void FUN0(int data);
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = 0;
    data = 2;
    funcPtr(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    void (*funcPtr) (int) = FUN2;
    data = 0;
    data = RAND32();
    funcPtr(data);
}
void FUN0(int data)
{
    if(data > 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN2(int data)
{
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
