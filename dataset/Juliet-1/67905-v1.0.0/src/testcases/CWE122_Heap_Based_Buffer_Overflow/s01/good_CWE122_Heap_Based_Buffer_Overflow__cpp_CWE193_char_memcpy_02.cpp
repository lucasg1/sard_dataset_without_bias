namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[10+1];
    }
    {
        char source[10+1] = SRC_STRING;
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char[10+1];
    }
    {
        char source[10+1] = SRC_STRING;
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        delete [] data;
    }
}
} 
