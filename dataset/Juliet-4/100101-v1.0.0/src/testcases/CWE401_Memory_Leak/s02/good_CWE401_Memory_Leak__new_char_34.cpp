namespace NAMESPACE0
{
typedef union
{
    char * unionFirst;
    char * unionSecond;
} unionType;
void FUN0()
{
    char * data;
    unionType myUnion;
    data = NULL;
    char VAR1;
    data = &VAR1;
    *data = 'A';
    printHexCharLine(*data);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        ; 
    }
}
void FUN1()
{
    char * data;
    unionType myUnion;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        delete data;
    }
}
} 
