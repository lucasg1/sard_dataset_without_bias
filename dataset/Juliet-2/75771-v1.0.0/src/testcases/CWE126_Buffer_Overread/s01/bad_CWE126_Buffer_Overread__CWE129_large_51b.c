void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = 10;
    FUN0(data);
}
void FUN0(int data)
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
