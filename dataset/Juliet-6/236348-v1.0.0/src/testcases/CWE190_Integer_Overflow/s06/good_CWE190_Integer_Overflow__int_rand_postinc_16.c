void FUN0()
{
    int data;
    data = 0;
    while(1)
    {
        data = RAND32();
        break;
    }
    while(1)
    {
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
        break;
    }
}
void FUN1()
{
    int data;
    data = 0;
    while(1)
    {
        data = 2;
        break;
    }
    while(1)
    {
        {
            data++;
            int result = data;
            printIntLine(result);
        }
        break;
    }
}
