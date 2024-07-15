void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char * * pointer = (char * *)ALLOCA(sizeof(char *));
<START>
            char * data = *pointer; 
<END>
            printLine(data);
        }
    }
    else
    {
        {
            char * data;
            char * * pointer = (char * *)ALLOCA(sizeof(char *));
            data = "string";
            *pointer = data; 
            {
                char * data = *pointer;
                printLine(data);
            }
        }
    }
}
