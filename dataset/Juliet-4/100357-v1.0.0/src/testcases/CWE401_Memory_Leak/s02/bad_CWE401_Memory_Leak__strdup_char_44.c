void FUN0(char * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    funcPtr(data);
}
