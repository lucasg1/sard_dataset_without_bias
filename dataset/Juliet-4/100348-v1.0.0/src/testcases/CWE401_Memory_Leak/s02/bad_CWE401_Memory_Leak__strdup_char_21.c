static int VAR0 = 0;
void FUN0(char * data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    VAR0 = 1; 
    FUN0(data);
}
