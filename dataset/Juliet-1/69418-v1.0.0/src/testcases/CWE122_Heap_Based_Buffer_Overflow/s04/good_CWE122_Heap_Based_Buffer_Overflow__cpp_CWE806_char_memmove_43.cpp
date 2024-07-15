namespace NAMESPACE0
{
void FUN0(char * &data)
{
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
}
void FUN1()
{
    char * data;
    data = new char[100];
    FUN0(data);
    {
        char dest[50] = "";
        memmove(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
