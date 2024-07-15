void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    FUN0(data);
}
void FUN2(int data);
void FUN0(int data)
{
    FUN2(data);
}
void FUN4(int data);
void FUN5(int data)
{
    FUN4(data);
}
void FUN5(int data);
void FUN2(int data)
{
    FUN5(data);
}
void FUN4(int data)
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
