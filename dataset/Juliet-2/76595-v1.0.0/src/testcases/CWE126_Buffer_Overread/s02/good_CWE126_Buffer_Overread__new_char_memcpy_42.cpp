namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    data = new char[100];
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        memcpy(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
        delete [] data;
    }
}
} 
