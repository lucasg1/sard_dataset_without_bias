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
