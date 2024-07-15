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
void FUN3(int data);
void FUN0(int data)
{
    FUN3(data);
}
void FUN1(int data);
void FUN7()
{
    int data;
    data = -1;
    data = 10;
    FUN1(data);
}
void FUN2(int data)
{
    {
        int buffer[10] = { 0 };
        if (data >= 0)
        {
<START>
            printIntLine(buffer[data]);
<END>
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}
