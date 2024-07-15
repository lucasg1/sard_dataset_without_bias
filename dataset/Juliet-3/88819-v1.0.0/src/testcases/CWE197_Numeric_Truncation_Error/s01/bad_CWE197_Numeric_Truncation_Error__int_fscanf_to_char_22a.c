extern int VAR0;
int FUN0(int data)
{
    if(VAR0)
    {
        fscanf(stdin, "%d", &data);
    }
    return data;
}
int VAR0 = 0;
int FUN0(int data);
void FUN2()
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
