static int FUN0(int data)
{
    data = -2;
    return data;
}
void FUN1()
{
    int data;
    data = 0;
    data = FUN0(data);
    if(data < 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
static int FUN2(int data)
{
    data = RAND32();
    return data;
}
void FUN3()
{
    int data;
    data = 0;
    data = FUN2(data);
    if(data < 0) 
    {
        if (data > (INT_MIN/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
