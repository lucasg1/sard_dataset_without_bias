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
void FUN5()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    FUN4(data);
}
void FUN3(int data);
void FUN4(int data)
{
    FUN3(data);
}
void FUN0(int data)
{
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
