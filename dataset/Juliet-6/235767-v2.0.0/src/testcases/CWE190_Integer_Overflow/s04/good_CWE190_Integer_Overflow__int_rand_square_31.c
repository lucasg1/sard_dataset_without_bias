void FUN0()
{
    int data;
    data = 0;
    data = 2;
    {
        int dataCopy = data;
        int data = dataCopy;
        {
            int result = data * data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = RAND32();
    {
        int dataCopy = data;
        int data = dataCopy;
        if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
        {
            int result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
