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
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
<START>
<END>
        ; 
    }
}
} 
