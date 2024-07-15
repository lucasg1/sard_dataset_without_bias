void FUN0(int data)
{
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = SHRT_MAX + 5;
    FUN0(data);
}
