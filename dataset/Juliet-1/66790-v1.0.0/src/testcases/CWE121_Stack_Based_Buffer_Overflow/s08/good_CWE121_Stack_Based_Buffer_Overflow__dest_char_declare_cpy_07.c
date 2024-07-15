static int staticFive = 5;
void FUN0()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = VAR1;
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcpy(data, source);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    if(staticFive==5)
    {
        data = VAR1;
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcpy(data, source);
        printLine(data);
    }
}
