namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    data = new char[10+1];
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    {
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
        delete [] data;
    }
}
} 
