int VAR0 = 0;
int VAR1 = 0;
void FUN0(char data);
void FUN1()
{
    char data;
    data = 'C';
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(char data);
void FUN3()
{
    char data;
    data = 'C';
    VAR1 = 1; 
    FUN2(data);
}
extern int VAR0;
extern int VAR1;
void FUN0(char data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printHexCharLine(data);
    }
}
void FUN2(char data)
{
    if(VAR1)
    {
        printHexCharLine(data);
    }
}
