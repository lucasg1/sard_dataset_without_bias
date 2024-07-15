static char FUN0(char data)
{
    fscanf (stdin, "%c", &data);
    return data;
}
void FUN1()
{
    char data;
    data = ' ';
    data = FUN0(data);
    if(data > 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
