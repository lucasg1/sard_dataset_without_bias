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
void FUN1(int data);
void FUN5()
{
    int data;
    data = 0;
    data = 2;
    FUN1(data);
}
void FUN3(int data);
void FUN7()
{
    int data;
    data = 0;
    data = RAND32();
    FUN3(data);
}
void FUN9(int data);
void FUN0(int data)
{
    FUN9(data);
}
void FUN11(int data);
void FUN2(int data)
{
    FUN11(data);
}
void FUN13(int data);
void FUN9(int data)
{
    FUN13(data);
}
void FUN15(int data);
void FUN11(int data)
{
    FUN15(data);
}
void FUN13(int data)
{
    {
        ++data;
        int result = data;
        printIntLine(result);
    }
}
void FUN15(int data)
{
    if (data < INT_MAX)
    {
        ++data;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
