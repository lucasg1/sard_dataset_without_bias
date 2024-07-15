void FUN0()
{
    int data;
    data = 0;
    data = 2;
    {
        int dataCopy = data;
        int data = dataCopy;
        {
            data++;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = INT_MAX;
    {
        int dataCopy = data;
        int data = dataCopy;
        if (data < INT_MAX)
        {
            data++;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
