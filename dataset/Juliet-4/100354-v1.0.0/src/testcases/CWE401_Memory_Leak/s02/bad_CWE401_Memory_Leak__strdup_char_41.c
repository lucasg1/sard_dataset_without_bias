void FUN0(char * data)
{
<START>
<END>
    ; 
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
    FUN0(data);
}
