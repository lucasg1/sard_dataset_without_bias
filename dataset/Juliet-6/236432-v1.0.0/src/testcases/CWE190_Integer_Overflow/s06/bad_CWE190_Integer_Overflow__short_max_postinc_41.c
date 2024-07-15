void FUN0(short data)
{
    {
<START>
        data++;
<END>
        short result = data;
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    FUN0(data);
}
