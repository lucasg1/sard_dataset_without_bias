void FUN0()
{
    char * data;
    char * VAR0 = (char *)ALLOCA(50*sizeof(char));
    char * VAR1 = (char *)ALLOCA(100*sizeof(char));
    if(GLOBAL_CONST_FIVE==5)
    {
        data = VAR0;
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strcat(data, source);
<END>
        printLine(data);
    }
}
