typedef union
{
    size_t unionFirst;
    size_t unionSecond;
} CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_34_unionType;
void FUN0()
{
    size_t data;
    CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_34_unionType myUnion;
    data = 0;
    data = 20;
    myUnion.unionFirst = data;
    {
        size_t data = myUnion.unionSecond;
        {
            char * myString;
            if (data > strlen(HELLO_STRING))
            {
                myString = (char *)malloc(data*sizeof(char));
                if (myString == NULL) {exit(-1);}
                strcpy(myString, HELLO_STRING);
                printLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string");
            }
        }
    }
}
void FUN1()
{
    size_t data;
    CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_34_unionType myUnion;
    data = 0;
    fscanf(stdin, "%zu", &data);
    myUnion.unionFirst = data;
    {
        size_t data = myUnion.unionSecond;
        {
            char * myString;
            if (data > strlen(HELLO_STRING) && data < 100)
            {
                myString = (char *)malloc(data*sizeof(char));
                if (myString == NULL) {exit(-1);}
                strcpy(myString, HELLO_STRING);
                printLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string or too large");
            }
        }
    }
}
