void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    fscanf(stdin, "%d", &data);
    goto sink;
sink:
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
