void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    FUN0(data);
}
void FUN0(int data)
{
    {
        int i;
        int buffer[10] = { 0 };
        if (data < 10)
        {
<START>
            buffer[data] = 1;
<END>
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
    }
}
