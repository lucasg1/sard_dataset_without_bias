namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    char VAR1;
    data = &VAR1;
    *data = 'A';
    printHexCharLine(*data);
    {
        char * dataCopy = data;
        char * data = dataCopy;
        ; 
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    {
        char * dataCopy = data;
        char * data = dataCopy;
        delete data;
    }
}
} 
