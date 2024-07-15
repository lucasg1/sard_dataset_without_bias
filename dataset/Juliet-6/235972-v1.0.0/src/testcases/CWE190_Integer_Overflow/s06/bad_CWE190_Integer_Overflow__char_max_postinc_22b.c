int VAR0 = 0;
void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(char data)
{
    if(VAR0)
    {
        {
<START>
            data++;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
