void FUN0()
{
    short data;
    data = 0;
    data = -2;
    {
        short dataCopy = data;
        short data = dataCopy;
        {
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    {
        short dataCopy = data;
        short data = dataCopy;
        if (data > SHRT_MIN)
        {
            data--;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
