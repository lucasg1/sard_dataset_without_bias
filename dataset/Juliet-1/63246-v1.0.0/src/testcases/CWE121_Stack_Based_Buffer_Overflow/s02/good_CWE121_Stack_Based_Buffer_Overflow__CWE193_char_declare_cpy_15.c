void FUN0()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
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
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
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
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
    }
}
