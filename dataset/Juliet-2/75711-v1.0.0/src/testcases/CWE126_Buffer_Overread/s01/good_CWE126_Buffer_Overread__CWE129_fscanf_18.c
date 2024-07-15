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
void FUN1()
{
    int data;
    data = -1;
    goto source;
source:
    data = 7;
    goto sink;
sink:
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
