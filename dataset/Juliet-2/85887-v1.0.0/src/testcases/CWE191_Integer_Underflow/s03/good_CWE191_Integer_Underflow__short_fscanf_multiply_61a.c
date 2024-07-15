short FUN0(short data)
{
    data = -2;
    return data;
}
short FUN1(short data)
{
    fscanf (stdin, "%hd", &data);
    return data;
}
short FUN0(short data);
void FUN3()
{
    short data;
    data = 0;
    data = FUN0(data);
    if(data < 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
short FUN1(short data);
void FUN5()
{
    short data;
    data = 0;
    data = FUN1(data);
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
