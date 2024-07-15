void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    FUN0(data);
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
