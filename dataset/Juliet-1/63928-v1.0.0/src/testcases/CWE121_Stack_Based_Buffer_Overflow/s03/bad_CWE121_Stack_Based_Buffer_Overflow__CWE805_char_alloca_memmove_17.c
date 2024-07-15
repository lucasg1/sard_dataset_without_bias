void FUN0()
{
    int i;
    char * data;
    char * VAR0 = (char *)ALLOCA(50*sizeof(char));
    char * VAR1 = (char *)ALLOCA(100*sizeof(char));
    for(i = 0; i < 1; i++)
    {
        data = VAR0;
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        memmove(data, source, 100*sizeof(char));
<END>
        data[100-1] = '\0'; 
        printLine(data);
    }
}
