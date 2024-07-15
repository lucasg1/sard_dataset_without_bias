void FUN0(short data)
{
    {
<START>
        --data;
<END>
        short result = data;
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
