namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR2;
    {
        char dest[50] = "";
        SNPRINTF(dest, strlen(data), "%s", data);
        printLine(data);
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = new char[100];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    VAR2 = data;
    FUN0();
}
} 
