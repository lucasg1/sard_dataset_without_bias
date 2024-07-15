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
void FUN0(int data)
{
    FUN4(data);
}
void FUN6(int data);
void FUN2(int data)
{
    FUN6(data);
}
void FUN1(int data);
void FUN9()
{
    int data;
    data = -1;
    data = 7;
    FUN1(data);
}
void FUN3(int data);
void FUN11()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    FUN3(data);
}
void FUN13(int data);
void FUN4(int data)
{
    FUN13(data);
}
void FUN15(int data);
void FUN6(int data)
{
    FUN15(data);
}
void FUN13(int data)
{
    {
        int buffer[10] = { 0 };
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
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
