int FUN0(int data)
{
    fscanf(stdin, "%d", &data);
    return data;
}
int FUN0(int data);
void FUN2()
{
    int data;
    data = -1;
    data = FUN0(data);
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
