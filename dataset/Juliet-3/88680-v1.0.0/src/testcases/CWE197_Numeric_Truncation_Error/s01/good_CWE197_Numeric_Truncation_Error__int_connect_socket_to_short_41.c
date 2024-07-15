void FUN0(int data)
{
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = CHAR_MAX-5;
    FUN0(data);
}
