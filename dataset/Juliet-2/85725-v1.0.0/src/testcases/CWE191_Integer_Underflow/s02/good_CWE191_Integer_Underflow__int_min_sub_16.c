void FUN0()
{
    int data;
    data = 0;
    while(1)
    {
        data = INT_MIN;
        break;
    }
    while(1)
    {
        if (data > INT_MIN)
        {
            int result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
        break;
    }
}
void FUN1()
{
    int data;
    data = 0;
    while(1)
    {
        data = -2;
        break;
    }
    while(1)
    {
        {
            int result = data - 1;
            printIntLine(result);
        }
        break;
    }
}
