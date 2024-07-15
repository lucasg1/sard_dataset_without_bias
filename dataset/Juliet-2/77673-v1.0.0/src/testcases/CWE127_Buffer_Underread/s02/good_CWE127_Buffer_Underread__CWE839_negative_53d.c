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
void FUN5()
{
    int data;
    data = -1;
    data = 7;
    FUN4(data);
}
void FUN6(int data);
void FUN7()
{
    int data;
    data = -1;
    data = -5;
    FUN6(data);
}
void FUN1(int data);
void FUN4(int data)
{
    FUN1(data);
}
void FUN3(int data);
void FUN6(int data)
{
    FUN3(data);
}
void FUN0(int data)
{
    {
        int buffer[10] = { 0 };
        if (data < 10)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is too big.");
        }
    }
}
void FUN2(int data)
{
    {
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}
