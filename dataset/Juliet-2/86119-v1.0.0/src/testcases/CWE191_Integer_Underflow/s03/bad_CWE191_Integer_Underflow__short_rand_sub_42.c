static short FUN0(short data)
{
    data = (short)RAND32();
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
