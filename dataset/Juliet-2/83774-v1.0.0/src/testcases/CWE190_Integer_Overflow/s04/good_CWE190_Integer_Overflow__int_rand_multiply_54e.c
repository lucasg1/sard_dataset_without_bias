void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN3(int data)
{
    FUN2(data);
}
void FUN4(int data);
void FUN5(int data)
{
    FUN4(data);
}
void FUN6(int data);
void FUN7(int data)
{
    FUN6(data);
}
void FUN5(int data);
void FUN0(int data)
{
    FUN5(data);
}
void FUN7(int data);
void FUN2(int data)
{
    FUN7(data);
}
void FUN1(int data);
void FUN13()
{
    int data;
    data = 0;
    data = 2;
    FUN1(data);
}
void FUN3(int data);
void FUN15()
{
    int data;
    data = 0;
    data = RAND32();
    FUN3(data);
}
void FUN4(int data)
{
    if(data > 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN6(int data)
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
