static short FUN0(short data)
{
    data = SHRT_MIN;
    return data;
}
void FUN1()
{
    short data;
    data = 0;
    data = FUN0(data);
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}
