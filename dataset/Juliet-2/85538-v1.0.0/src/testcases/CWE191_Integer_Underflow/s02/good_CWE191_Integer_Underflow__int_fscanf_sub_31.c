void FUN0()
{
    int data;
    data = 0;
    data = -2;
    {
        int dataCopy = data;
        int data = dataCopy;
        {
            int result = data - 1;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    {
        int dataCopy = data;
        int data = dataCopy;
        if (data > INT_MIN)
        {
            int result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
