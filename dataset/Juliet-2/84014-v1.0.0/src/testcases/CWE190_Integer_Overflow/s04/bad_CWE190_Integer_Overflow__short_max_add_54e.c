void FUN0(short data);
void FUN1(short data)
{
    FUN0(data);
}
void FUN2(short data);
void FUN3()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    FUN2(data);
}
void FUN4(short data);
void FUN2(short data)
{
    FUN4(data);
}
void FUN1(short data);
void FUN4(short data)
{
    FUN1(data);
}
void FUN0(short data)
{
    {
<START>
        short result = data + 1;
<END>
        printIntLine(result);
    }
}
