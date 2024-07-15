void FUN0(short data)
{
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    FUN0(data);
}
