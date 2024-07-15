void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    FUN0(data);
}
void FUN2(int data);
void FUN3(int data)
{
    FUN2(data);
}
void FUN4(int data);
void FUN2(int data)
{
    FUN4(data);
}
void FUN3(int data);
void FUN0(int data)
{
    FUN3(data);
}
void FUN4(int data)
{
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
