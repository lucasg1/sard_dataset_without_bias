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
    data = new char[100];
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    unionType myUnion;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        free(data);
    }
}
} 
