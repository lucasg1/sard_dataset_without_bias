void FUN0()
{
    char * data;
    char * VAR0 = (char *)ALLOCA(50*sizeof(char));
    char * VAR1 = (char *)ALLOCA(100*sizeof(char));
    data = VAR0;
    data[0] = '\0'; 
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
<START>
            memcpy(data, source, 100*sizeof(char));
<END>
            data[100-1] = '\0'; 
            printLine(data);
        }
    }
}
