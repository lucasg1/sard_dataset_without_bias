void FUN0()
{
    int h;
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    for(h = 0; h < 1; h++)
    {
        data = VAR1;
        data[0] = '\0'; 
    }
    {
        char source[10+1] = SRC_STRING;
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
    }
}
