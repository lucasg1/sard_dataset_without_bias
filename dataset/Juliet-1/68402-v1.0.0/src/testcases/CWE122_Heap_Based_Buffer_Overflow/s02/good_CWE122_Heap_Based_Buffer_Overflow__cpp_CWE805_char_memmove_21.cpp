namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static char * FUN0(char * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        data[0] = '\0'; 
    }
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    VAR1 = 0; 
    data = FUN0(data);
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        memmove(data, source, 100*sizeof(char));
        data[100-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
    ;
}
static char * FUN2(char * data)
{
    if(VAR2)
    {
        data = new char[100];
        data[0] = '\0'; 
    }
    return data;
}
void FUN3()
{
    char * data;
    data = NULL;
    VAR2 = 1; 
    data = FUN2(data);
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        memmove(data, source, 100*sizeof(char));
        data[100-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
    ;
}
} 
