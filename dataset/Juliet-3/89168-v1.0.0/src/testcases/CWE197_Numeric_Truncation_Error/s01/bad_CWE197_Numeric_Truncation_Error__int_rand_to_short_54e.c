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
void FUN4(int data);
void FUN0(int data)
{
    FUN4(data);
}
void FUN3(int data);
void FUN7()
{
    int data;
    data = -1;
    data = RAND32();
    FUN3(data);
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
