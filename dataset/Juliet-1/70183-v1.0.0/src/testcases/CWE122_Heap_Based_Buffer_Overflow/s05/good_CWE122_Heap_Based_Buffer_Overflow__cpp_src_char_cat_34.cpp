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
    data = new char[100];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[50] = "";
            strcat(dest, data);
            printLine(data);
            delete [] data;
        }
    }
}
} 
