void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = CHAR_MAX-5;
    FUN0(data);
}
void FUN3(int data);
void FUN0(int data)
{
    FUN3(data);
}
void FUN3(int data)
{
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
