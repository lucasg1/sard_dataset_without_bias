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
    {
        char * dataBuffer = new char;
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        printHexCharLine(*data);
        delete data;
    }
}
} 
