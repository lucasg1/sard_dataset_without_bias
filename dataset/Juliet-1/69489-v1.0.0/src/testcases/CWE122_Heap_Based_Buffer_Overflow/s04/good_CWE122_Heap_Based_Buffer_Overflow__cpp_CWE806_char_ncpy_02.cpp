namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[50] = "";
        strncpy(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = new char[100];
    if(1)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[50] = "";
        strncpy(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
