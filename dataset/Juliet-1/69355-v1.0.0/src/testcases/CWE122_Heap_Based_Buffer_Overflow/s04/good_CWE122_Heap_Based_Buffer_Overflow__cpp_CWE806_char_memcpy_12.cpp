namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    if(globalReturnsTrueOrFalse())
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    else
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[50] = "";
        memcpy(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
