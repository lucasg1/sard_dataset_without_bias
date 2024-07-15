typedef union
{
    short unionFirst;
    short unionSecond;
} CWE197_Numeric_Truncation_Error__short_fscanf_34_unionType;
void FUN0()
{
    short data;
    CWE197_Numeric_Truncation_Error__short_fscanf_34_unionType myUnion;
    data = -1;
    fscanf (stdin, "%hd", &data);
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
<START>
            char charData = (char)data;
<END>
            printHexCharLine(charData);
        }
    }
}
