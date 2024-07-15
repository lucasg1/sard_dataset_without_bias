typedef union
{
    size_t unionFirst;
    size_t unionSecond;
} CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_34_unionType;
void FUN0()
{
    size_t data;
    CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_34_unionType myUnion;
    data = 0;
    data = 20;
    myUnion.unionFirst = data;
    {
        size_t data = myUnion.unionSecond;
        {
            wchar_t * myString;
            if (data > wcslen(HELLO_STRING))
            {
                myString = (wchar_t *)malloc(data*sizeof(wchar_t));
                if (myString == NULL) {exit(-1);}
                wcscpy(myString, HELLO_STRING);
                printWLine(myString);
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
    CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_34_unionType myUnion;
    data = 0;
    fscanf(stdin, "%zu", &data);
    myUnion.unionFirst = data;
    {
        size_t data = myUnion.unionSecond;
        {
            wchar_t * myString;
            if (data > wcslen(HELLO_STRING) && data < 100)
            {
                myString = (wchar_t *)malloc(data*sizeof(wchar_t));
                if (myString == NULL) {exit(-1);}
                wcscpy(myString, HELLO_STRING);
                printWLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string or too large");
            }
        }
    }
}
