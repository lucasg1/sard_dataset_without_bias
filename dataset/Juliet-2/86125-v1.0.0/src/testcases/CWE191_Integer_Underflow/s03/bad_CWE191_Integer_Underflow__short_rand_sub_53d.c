void FUN0(short data);
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    FUN0(data);
}
void FUN2(short data);
void FUN0(short data)
{
    FUN2(data);
}
void FUN4(short data);
void FUN2(short data)
{
    FUN4(data);
}
void FUN4(short data)
{
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}
