namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    goto source;
source:
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    {
        char dest[50] = "";
        strncpy(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
