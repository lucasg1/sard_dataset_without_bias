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
    void (*funcPtr) (int) = FUN0;
    data = -1;
    data = CHAR_MAX-5;
    funcPtr(data);
}
