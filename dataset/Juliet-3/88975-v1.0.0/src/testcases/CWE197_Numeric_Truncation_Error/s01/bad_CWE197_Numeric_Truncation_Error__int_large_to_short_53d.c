void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = SHRT_MAX + 5;
    FUN0(data);
}
void FUN2(int data);
void FUN0(int data)
{
    FUN2(data);
}
void FUN4(int data);
void FUN2(int data)
{
    FUN4(data);
}
void FUN4(int data)
{
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
