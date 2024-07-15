void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN1(int data);
void FUN3(int data)
{
    FUN1(data);
}
void FUN3(int data);
void FUN5(int data)
{
    FUN3(data);
}
void FUN5(int data);
void FUN7()
{
    int data;
    data = -1;
    data = SHRT_MAX + 5;
    FUN5(data);
}
void FUN0(int data)
{
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
