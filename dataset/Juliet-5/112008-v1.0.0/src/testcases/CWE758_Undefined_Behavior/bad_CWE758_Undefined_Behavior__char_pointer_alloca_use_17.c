void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
