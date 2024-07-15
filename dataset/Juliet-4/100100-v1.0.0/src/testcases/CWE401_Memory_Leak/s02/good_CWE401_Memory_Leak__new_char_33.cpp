namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    char VAR1;
    data = &VAR1;
    *data = 'A';
    printHexCharLine(*data);
    {
        char * data = dataRef;
        ; 
    }
}
void FUN1()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    {
        char * data = dataRef;
        delete data;
    }
}
} 
