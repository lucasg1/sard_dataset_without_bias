short FUN0(short data)
{
    data = SHRT_MAX;
    return data;
}
short FUN0(short data);
void FUN2()
{
    short data;
    data = 0;
    data = FUN0(data);
    if(data > 0) 
    {
<START>
        short result = data * 2;
<END>
        printIntLine(result);
    }
}
