void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    data = -5;
    goto sink;
sink:
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