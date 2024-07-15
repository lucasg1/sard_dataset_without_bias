namespace NAMESPACE0
{
static int VAR1 = 0;
static char * FUN0(char * data)
{
    if(VAR1)
    {
        data = new char[50];
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN0(data);
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
<START>
        memcpy(dest, data, strlen(dest)*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
        delete [] data;
    }
    ;
}
} 
