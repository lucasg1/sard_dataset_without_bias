void FUN0()
{
    char * data;
    char * VAR0 = (char *)ALLOCA((10)*sizeof(char));
    char * VAR1 = (char *)ALLOCA((10+1)*sizeof(char));
    data = VAR0;
    data[0] = '\0'; 
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char source[10+1] = SRC_STRING;
<START>
            strncpy(data, source, strlen(source) + 1);
<END>
            printLine(data);
        }
    }
}
