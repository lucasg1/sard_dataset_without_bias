void FUN0()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    data = 0;
    {
        short data = *dataPtr1;
        data = 2;
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        {
            data++;
            short result = data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    data = 0;
    {
        short data = *dataPtr1;
        data = (short)RAND32();
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        if (data < SHRT_MAX)
        {
            data++;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
