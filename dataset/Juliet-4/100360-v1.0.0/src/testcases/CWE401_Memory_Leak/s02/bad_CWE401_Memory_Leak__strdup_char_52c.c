void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    FUN1(data);
}
void FUN0(char * data)
{
<START>
<END>
    ; 
}
