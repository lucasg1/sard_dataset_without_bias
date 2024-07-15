void FUN0()
{
    char * data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        data = "string";
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printLine(data);
<END>
    }
    else
    {
        data = "string";
        printLine(data);
    }
}
