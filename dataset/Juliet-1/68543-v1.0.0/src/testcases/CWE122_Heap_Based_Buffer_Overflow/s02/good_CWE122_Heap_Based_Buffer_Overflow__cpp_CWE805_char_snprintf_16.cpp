namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = new char[100];
        data[0] = '\0'; 
        break;
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        SNPRINTF(data, 100, "%s", source);
        printLine(data);
        delete [] data;
    }
}
} 
