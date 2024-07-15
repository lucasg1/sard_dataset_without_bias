namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    delete data;
    ; 
}
} 
