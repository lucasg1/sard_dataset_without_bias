void FUN0()
{
    int data;
    data = 0;
    data = -2;
    {
        int dataCopy = data;
        int data = dataCopy;
        if(data < 0) 
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
    data = INT_MIN;
    {
        int dataCopy = data;
        int data = dataCopy;
        if(data < 0) 
        {
            if (data > (INT_MIN/2))
            {
                int result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}
