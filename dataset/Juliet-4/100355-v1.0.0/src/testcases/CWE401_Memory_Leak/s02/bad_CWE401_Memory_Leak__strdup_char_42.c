static char * FUN0(char * data)
{
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
<START>
<END>
    ; 
}
