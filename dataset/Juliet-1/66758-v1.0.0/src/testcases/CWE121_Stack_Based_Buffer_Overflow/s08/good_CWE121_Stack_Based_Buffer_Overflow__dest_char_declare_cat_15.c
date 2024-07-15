void FUN0()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = VAR1;
        data[0] = '\0'; 
        break;
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    switch(6)
    {
    case 6:
        data = VAR1;
        data[0] = '\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
