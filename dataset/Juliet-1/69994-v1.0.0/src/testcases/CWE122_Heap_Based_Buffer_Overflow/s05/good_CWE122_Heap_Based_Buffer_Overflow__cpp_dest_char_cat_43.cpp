namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char[100];
    data[0] = '\0'; 
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
        delete [] data;
    }
}
} 
