namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        char source[10+1] = SRC_STRING;
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[10+1];
    FUN0(data);
}
} 
