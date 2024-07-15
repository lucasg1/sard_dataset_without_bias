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
        data = new char[10+1];
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
        char source[10+1] = SRC_STRING;
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        delete [] data;
    }
    ;
}
static char * FUN2(char * data)
{
    if(VAR2)
    {
        data = new char[10+1];
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
        char source[10+1] = SRC_STRING;
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        delete [] data;
    }
    ;
}
} 
