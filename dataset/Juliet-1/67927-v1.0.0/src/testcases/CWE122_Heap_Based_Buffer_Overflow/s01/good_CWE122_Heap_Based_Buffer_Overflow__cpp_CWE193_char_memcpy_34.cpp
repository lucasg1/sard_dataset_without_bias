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
    data = new char[10+1];
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[10+1] = SRC_STRING;
            memcpy(data, source, (strlen(source) + 1) * sizeof(char));
            printLine(data);
            delete [] data;
        }
    }
}
} 
