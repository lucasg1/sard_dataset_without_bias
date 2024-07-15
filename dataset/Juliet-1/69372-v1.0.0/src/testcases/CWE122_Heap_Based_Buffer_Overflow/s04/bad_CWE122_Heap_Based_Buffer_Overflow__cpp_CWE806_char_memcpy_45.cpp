namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR1;
    {
        char dest[50] = "";
<START>
        memcpy(dest, data, strlen(data)*sizeof(char));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = new char[100];
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    VAR1 = data;
    FUN0();
}
} 
