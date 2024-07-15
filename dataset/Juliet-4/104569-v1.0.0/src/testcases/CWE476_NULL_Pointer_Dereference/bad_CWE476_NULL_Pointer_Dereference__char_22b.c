int VAR0 = 0;
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(char * data)
{
    if(VAR0)
    {
<START>
        printHexCharLine(data[0]);
<END>
    }
}
