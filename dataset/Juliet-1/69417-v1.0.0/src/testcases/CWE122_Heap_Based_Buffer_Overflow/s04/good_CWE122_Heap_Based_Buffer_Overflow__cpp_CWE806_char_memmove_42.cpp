namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    return data;
}
void FUN1()
{
    char * data;
    data = new char[100];
    data = FUN0(data);
    {
        char dest[50] = "";
        memmove(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
