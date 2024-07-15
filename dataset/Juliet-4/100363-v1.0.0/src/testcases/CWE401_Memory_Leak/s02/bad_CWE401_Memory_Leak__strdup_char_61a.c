char * FUN0(char * data)
{
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    data = NULL;
    data = FUN0(data);
<START>
<END>
    ; 
}
