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
    data = -1;
    data = 7;
    FUN1(data);
}
void FUN3(int data);
void FUN7()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
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
void FUN15(int data)
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
