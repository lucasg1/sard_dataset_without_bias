void FUN0()
{
    int data;
    data = -1;
    data = 7;
    {
        int dataCopy = data;
        int data = dataCopy;
        {
            int buffer[10] = { 0 };
            if (data < 10)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is too big.");
            }
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    {
        int dataCopy = data;
        int data = dataCopy;
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
}
