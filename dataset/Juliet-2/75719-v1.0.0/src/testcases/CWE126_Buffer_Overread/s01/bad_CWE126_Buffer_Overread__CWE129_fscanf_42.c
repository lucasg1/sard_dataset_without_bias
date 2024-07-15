static int FUN0(int data)
{
    fscanf(stdin, "%d", &data);
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    data = FUN0(data);
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
