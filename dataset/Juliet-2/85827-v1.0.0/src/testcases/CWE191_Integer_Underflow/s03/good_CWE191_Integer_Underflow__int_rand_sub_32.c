void FUN0()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = 0;
    {
        int data = *dataPtr1;
        data = -2;
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
        {
            int result = data - 1;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = 0;
    {
        int data = *dataPtr1;
        data = RAND32();
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
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
