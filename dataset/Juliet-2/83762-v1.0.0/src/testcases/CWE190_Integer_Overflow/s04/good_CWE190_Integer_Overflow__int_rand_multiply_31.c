void FUN0()
{
    int data;
    data = 0;
    data = 2;
    {
        int dataCopy = data;
        int data = dataCopy;
        if(data > 0) 
        {
            int result = data * 2;
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
        if(data > 0) 
        {
            if (data < (INT_MAX/2))
            {
                int result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
