void FUN0()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    data = 0;
    {
        short data = *dataPtr1;
        data = -2;
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        if(data < 0) 
        {
            short result = data * 2;
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
        fscanf (stdin, "%hd", &data);
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        if(data < 0) 
        {
            if (data > (SHRT_MIN/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}
