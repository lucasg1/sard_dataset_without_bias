void FUN0(int data)
{
    if(data < 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = -2;
    FUN0(data);
}
void FUN2(int data)
{
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
void FUN3()
{
    int data;
    data = 0;
    data = RAND32();
    FUN2(data);
}
