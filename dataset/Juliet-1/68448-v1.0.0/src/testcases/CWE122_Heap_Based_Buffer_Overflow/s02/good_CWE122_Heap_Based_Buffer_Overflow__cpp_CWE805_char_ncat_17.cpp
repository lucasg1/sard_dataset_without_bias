namespace NAMESPACE0
{
void FUN0()
{
    int h;
    char * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new char[100];
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strncat(data, source, 100);
        printLine(data);
        delete [] data;
    }
}
} 
