void FUN0()
{
    int h;
    char * data;
    char VAR0[50];
    char VAR1[100];
    for(h = 0; h < 1; h++)
    {
        data = VAR1;
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strncpy(data, source, 100-1);
        data[100-1] = '\0'; 
        printLine(data);
    }
}
