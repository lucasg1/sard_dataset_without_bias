void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN1(int data);
void FUN3()
{
    int data;
    data = -1;
    data = CHAR_MAX-5;
    FUN1(data);
}
void FUN5(int data);
void FUN0(int data)
{
    FUN5(data);
}
void FUN5(int data)
{
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
