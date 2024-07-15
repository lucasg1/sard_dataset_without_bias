void FUN0()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    {
        char * dataCopy = data;
        char * data = dataCopy;
<START>
<END>
        ; 
    }
}
