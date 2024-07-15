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
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    FUN0(data);
}
