typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE401_Memory_Leak__char_realloc_34_unionType;
void FUN0()
{
    char * data;
    CWE401_Memory_Leak__char_realloc_34_unionType myUnion;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        ; 
    }
}
void FUN1()
{
    char * data;
    CWE401_Memory_Leak__char_realloc_34_unionType myUnion;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        free(data);
    }
}
