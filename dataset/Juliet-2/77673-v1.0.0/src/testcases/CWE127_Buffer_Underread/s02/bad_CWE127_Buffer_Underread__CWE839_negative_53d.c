void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = -1;
    data = -5;
    FUN2(data);
}
void FUN1(int data);
void FUN2(int data)
{
    FUN1(data);
}
void FUN0(int data)
{
    {
        int buffer[10] = { 0 };
        if (data < 10)
        {
<START>
            printIntLine(buffer[data]);
<END>
        }
        else
        {
            printLine("ERROR: Array index is too big.");
        }
    }
}
