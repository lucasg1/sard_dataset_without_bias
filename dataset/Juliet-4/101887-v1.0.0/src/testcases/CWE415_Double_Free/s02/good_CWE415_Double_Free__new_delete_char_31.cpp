namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char;
    {
        char * dataCopy = data;
        char * data = dataCopy;
        delete data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    delete data;
    {
        char * dataCopy = data;
        char * data = dataCopy;
        ; 
    }
}
} 
