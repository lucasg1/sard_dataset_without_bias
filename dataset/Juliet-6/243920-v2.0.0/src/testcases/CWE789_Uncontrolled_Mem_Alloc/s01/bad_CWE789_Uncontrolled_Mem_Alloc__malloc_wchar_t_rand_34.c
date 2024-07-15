typedef union
{
    size_t unionFirst;
    size_t unionSecond;
} CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_34_unionType;
void FUN0()
{
    size_t data;
    CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_34_unionType myUnion;
    data = 0;
    data = rand();
    myUnion.unionFirst = data;
    {
        size_t data = myUnion.unionSecond;
        {
            wchar_t * myString;
            if (data > wcslen(HELLO_STRING))
            {
<START>
                myString = (wchar_t *)malloc(data*sizeof(wchar_t));
<END>
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
