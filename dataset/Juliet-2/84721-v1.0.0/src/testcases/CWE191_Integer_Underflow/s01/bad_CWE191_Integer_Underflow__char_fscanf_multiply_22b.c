int VAR0 = 0;
void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(char data)
{
    if(VAR0)
    {
        if(data < 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
