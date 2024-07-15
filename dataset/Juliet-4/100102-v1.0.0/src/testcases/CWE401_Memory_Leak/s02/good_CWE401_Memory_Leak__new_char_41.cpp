namespace NAMESPACE0
{
void FUN0(char * data)
{
    ; 
}
void FUN1()
{
    char * data;
    data = NULL;
    char VAR1;
    data = &VAR1;
    *data = 'A';
    printHexCharLine(*data);
    FUN0(data);
}
void FUN2(char * data)
{
    delete data;
}
void FUN3()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    FUN2(data);
}
} 
