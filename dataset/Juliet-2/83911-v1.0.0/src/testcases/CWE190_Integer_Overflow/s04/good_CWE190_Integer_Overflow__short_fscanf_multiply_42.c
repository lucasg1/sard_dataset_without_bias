static short FUN0(short data)
{
    data = 2;
    return data;
}
void FUN1()
{
    short data;
    data = 0;
    data = FUN0(data);
    if(data > 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
static short FUN2(short data)
{
    fscanf (stdin, "%hd", &data);
    return data;
}
void FUN3()
{
    short data;
    data = 0;
    data = FUN2(data);
    if(data > 0) 
    {
        if (data < (SHRT_MAX/2))
        {
            short result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
