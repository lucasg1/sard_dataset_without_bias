void FUN0(short data);
void FUN1()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    FUN0(data);
}
void FUN2(short data);
void FUN0(short data)
{
    FUN2(data);
}
void FUN2(short data)
{
    {
<START>
        short result = data * data;
<END>
        printIntLine(result);
    }
}
