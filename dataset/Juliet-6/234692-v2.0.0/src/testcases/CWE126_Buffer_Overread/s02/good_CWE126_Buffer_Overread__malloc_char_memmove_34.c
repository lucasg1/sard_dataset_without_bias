typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE126_Buffer_Overread__malloc_char_memmove_34_unionType;
void FUN0()
{
    char * data;
    CWE126_Buffer_Overread__malloc_char_memmove_34_unionType myUnion;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[100];
            memset(dest, 'C', 100-1);
            dest[100-1] = '\0'; 
            memmove(dest, data, strlen(dest)*sizeof(char));
            dest[100-1] = '\0';
            printLine(dest);
            free(data);
        }
    }
}
