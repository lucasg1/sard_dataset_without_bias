typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_34_unionType;
void FUN0()
{
    char * data;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_34_unionType myUnion;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0';
    strcpy(data, BAD_SOURCE_FIXED_STRING);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
<START>
        for (; *data != '\0'; data++)
<END>
        {
            if (*data == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
}
