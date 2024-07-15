void FUN0(char data);
void FUN1(char data)
{
    FUN0(data);
}
void FUN2(char data);
void FUN3()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    FUN2(data);
}
void FUN1(char data);
void FUN5(char data)
{
    FUN1(data);
}
void FUN5(char data);
void FUN2(char data)
{
    FUN5(data);
}
void FUN0(char data)
{
    if(data < 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
