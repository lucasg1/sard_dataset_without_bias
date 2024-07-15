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
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    return data;
}
void FUN1()
{
    char * data;
    data = new char[100];
    VAR1 = 0; 
    data = FUN0(data);
    {
        char dest[50] = "";
        memmove(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
    ;
}
static char * FUN2(char * data)
{
    if(VAR2)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    return data;
}
void FUN3()
{
    char * data;
    data = new char[100];
    VAR2 = 1; 
    data = FUN2(data);
    {
        char dest[50] = "";
        memmove(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
    ;
}
} 
