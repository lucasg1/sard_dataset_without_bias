void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
            printLine(data);
        }
    }
    if(globalTrue)
    {
<START>
<END>
        ; 
    }
}
