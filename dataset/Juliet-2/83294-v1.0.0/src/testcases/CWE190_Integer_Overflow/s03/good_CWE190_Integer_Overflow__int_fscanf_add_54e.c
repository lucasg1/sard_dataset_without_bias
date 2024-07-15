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
    fscanf(stdin, "%d", &data);
    FUN3(data);
}
void FUN9(int data);
void FUN10(int data)
{
    FUN9(data);
}
void FUN11(int data);
void FUN12(int data)
{
    FUN11(data);
}
void FUN10(int data);
void FUN0(int data)
{
    FUN10(data);
}
void FUN12(int data);
void FUN2(int data)
{
    FUN12(data);
}
void FUN9(int data)
{
    {
        int result = data + 1;
        printIntLine(result);
    }
}
void FUN11(int data)
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
