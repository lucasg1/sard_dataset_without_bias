typedef union
{
    int unionFirst;
    int unionSecond;
} CWE197_Numeric_Truncation_Error__int_fscanf_to_char_34_unionType;
void FUN0()
{
    int data;
    CWE197_Numeric_Truncation_Error__int_fscanf_to_char_34_unionType myUnion;
    data = -1;
    data = CHAR_MAX-5;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            char charData = (char)data;
            printHexCharLine(charData);
        }
    }
}
