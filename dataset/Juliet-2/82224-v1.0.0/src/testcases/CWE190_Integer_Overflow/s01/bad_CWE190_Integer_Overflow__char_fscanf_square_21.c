static int VAR0 = 0;
void FUN0(char data)
{
    if(VAR0)
    {
        {
<START>
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    VAR0 = 1; 
    FUN0(data);
}
