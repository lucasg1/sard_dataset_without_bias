void FUN0(short data);
void FUN1()
{
    short data;
    data = 0;
    data = -2;
    FUN0(data);
}
void FUN2(short data);
void FUN3()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    FUN2(data);
}
void FUN0(short data)
{
    if(data < 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
void FUN2(short data)
{
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
