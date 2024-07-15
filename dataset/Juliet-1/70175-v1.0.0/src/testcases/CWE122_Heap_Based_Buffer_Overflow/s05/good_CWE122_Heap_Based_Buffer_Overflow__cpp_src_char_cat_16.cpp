namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    while(1)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
        break;
    }
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
        delete [] data;
    }
}
} 
