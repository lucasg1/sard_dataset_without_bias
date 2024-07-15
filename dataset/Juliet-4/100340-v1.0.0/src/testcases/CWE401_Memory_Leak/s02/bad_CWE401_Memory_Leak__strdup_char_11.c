void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
            printLine(data);
        }
    }
    if(globalReturnsTrue())
    {
<START>
<END>
        ; 
    }
}
