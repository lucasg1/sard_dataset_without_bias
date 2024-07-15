typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE401_Memory_Leak__strdup_char_34_unionType;
void FUN0()
{
    char * data;
    CWE401_Memory_Leak__strdup_char_34_unionType myUnion;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "a string");
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
    CWE401_Memory_Leak__strdup_char_34_unionType myUnion;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        free(data);
    }
}
