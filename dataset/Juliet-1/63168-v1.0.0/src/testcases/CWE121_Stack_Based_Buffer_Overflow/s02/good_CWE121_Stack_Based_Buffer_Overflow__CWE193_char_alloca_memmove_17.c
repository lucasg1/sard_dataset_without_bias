void FUN0()
{
    int h;
    char * data;
    char * VAR0 = (char *)ALLOCA((10)*sizeof(char));
    char * VAR1 = (char *)ALLOCA((10+1)*sizeof(char));
    for(h = 0; h < 1; h++)
    {
        data = VAR1;
        data[0] = '\0'; 
    }
    {
        char source[10+1] = SRC_STRING;
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}
