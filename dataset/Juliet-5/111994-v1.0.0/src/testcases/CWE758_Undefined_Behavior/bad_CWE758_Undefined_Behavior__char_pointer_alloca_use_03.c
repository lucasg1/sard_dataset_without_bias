void FUN0()
{
    if(5==5)
    {
        {
            char * * pointer = (char * *)ALLOCA(sizeof(char *));
<START>
            char * data = *pointer; 
<END>
            printLine(data);
        }
    }
}
