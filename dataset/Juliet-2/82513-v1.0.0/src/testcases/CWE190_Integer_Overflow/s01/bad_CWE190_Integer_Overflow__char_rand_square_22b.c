int VAR0 = 0;
void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    data = (char)RAND32();
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
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}