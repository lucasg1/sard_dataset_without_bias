void FUN0(short data);
void FUN1(short data)
{
    FUN0(data);
}
void FUN1(short data);
void FUN3()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    FUN1(data);
}
void FUN0(short data)
{
    if(data > 0) 
    {
<START>
        short result = data * 2;
<END>
        printIntLine(result);
    }
}
