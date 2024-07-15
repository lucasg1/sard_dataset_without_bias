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
    data = SHRT_MIN;
    FUN0(data);
}
