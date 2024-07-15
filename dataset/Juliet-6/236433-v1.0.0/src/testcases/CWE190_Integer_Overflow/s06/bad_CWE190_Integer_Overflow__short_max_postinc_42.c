static short FUN0(short data)
{
    data = SHRT_MAX;
    return data;
}
void FUN1()
{
    short data;
    data = 0;
    data = FUN0(data);
    {
<START>
        data++;
<END>
        short result = data;
        printIntLine(result);
    }
}
