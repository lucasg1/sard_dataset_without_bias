void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    goto sink;
sink:
<START>
<END>
    ; 
}
