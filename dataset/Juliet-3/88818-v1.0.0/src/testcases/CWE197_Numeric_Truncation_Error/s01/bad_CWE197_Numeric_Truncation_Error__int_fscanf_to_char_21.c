static int VAR0 = 0;
static int FUN0(int data)
{
    if(VAR0)
    {
        fscanf(stdin, "%d", &data);
    }
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    VAR0 = 1; 
    data = FUN0(data);
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
