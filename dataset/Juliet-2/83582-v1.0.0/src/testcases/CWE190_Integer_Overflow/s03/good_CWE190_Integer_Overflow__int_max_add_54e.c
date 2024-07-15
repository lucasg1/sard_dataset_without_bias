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
    data = 0;
    data = 2;
    FUN4(data);
}
void FUN6(int data);
void FUN7()
{
    int data;
    data = 0;
    data = INT_MAX;
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
void FUN13(int data);
void FUN0(int data)
{
    FUN13(data);
}
void FUN15(int data);
void FUN2(int data)
{
    FUN15(data);
}
void FUN13(int data)
{
    {
        int result = data + 1;
        printIntLine(result);
    }
}
void FUN15(int data)
{
    if (data < INT_MAX)
    {
        int result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
