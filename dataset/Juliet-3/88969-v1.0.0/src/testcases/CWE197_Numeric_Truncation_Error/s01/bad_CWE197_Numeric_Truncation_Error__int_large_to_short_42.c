static int FUN0(int data)
{
    data = SHRT_MAX + 5;
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    data = FUN0(data);
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
