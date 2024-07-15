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
        strcpy(dest, data);
        printLine(data);
        delete [] data;
    }
}
} 
