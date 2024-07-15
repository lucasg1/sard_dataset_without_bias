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
void FUN8(int data);
void FUN4(int data)
{
    FUN8(data);
}
void FUN10(int data);
void FUN6(int data)
{
    FUN10(data);
}
void FUN1(int data);
void FUN13()
{
    int data;
    data = 0;
    data = -2;
    FUN1(data);
}
void FUN3(int data);
void FUN15()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    FUN3(data);
}
void FUN8(int data)
{
    {
        int result = data - 1;
        printIntLine(result);
    }
}
void FUN10(int data)
{
    if (data > INT_MIN)
    {
        int result = data - 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
