void FUN0()
{
    char * data;
    char * VAR0 = (char *)ALLOCA((10)*sizeof(char));
    char * VAR1 = (char *)ALLOCA((10+1)*sizeof(char));
    while(1)
    {
        data = VAR1;
        data[0] = '\0'; 
        break;
    }
    {
        char source[10+1] = SRC_STRING;
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
    }
}
