void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = 2;
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = 0;
    data = INT_MAX;
    FUN2(data);
}
void FUN5(int data);
void FUN6(int data)
{
    FUN5(data);
}
void FUN7(int data);
void FUN8(int data)
{
    FUN7(data);
}
void FUN6(int data);
void FUN0(int data)
{
    FUN6(data);
}
void FUN8(int data);
void FUN2(int data)
{
    FUN8(data);
}
void FUN5(int data)
{
    if(data > 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN7(int data)
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
