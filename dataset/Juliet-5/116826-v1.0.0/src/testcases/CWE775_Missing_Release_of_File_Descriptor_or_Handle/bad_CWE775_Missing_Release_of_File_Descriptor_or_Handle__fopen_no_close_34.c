typedef union
{
    FILE * unionFirst;
    FILE * unionSecond;
} CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_34_unionType;
void FUN0()
{
    FILE * data;
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_34_unionType myUnion;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    myUnion.unionFirst = data;
    {
        FILE * data = myUnion.unionSecond;
<START>
<END>
        ; 
    }
}
