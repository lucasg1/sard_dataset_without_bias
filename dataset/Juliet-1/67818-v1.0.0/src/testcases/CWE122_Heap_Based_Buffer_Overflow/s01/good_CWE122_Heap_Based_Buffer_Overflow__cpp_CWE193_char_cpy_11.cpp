namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[10+1];
    }
    {
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char[10+1];
    }
    {
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
        delete [] data;
    }
}
} 
