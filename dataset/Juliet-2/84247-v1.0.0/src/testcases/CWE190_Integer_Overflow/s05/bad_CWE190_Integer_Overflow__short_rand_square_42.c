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
        short result = data * data;
<END>
        printIntLine(result);
    }
}
