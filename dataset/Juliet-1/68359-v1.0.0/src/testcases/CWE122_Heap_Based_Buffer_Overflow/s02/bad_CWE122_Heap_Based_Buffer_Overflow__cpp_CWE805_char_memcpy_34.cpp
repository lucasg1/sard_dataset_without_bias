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
    data = new char[50];
    data[0] = '\0'; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
<START>
            memcpy(data, source, 100*sizeof(char));
<END>
            data[100-1] = '\0'; 
            printLine(data);
            delete [] data;
        }
    }
}
} 
