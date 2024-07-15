typedef union
{
    char unionFirst;
    char unionSecond;
} CWE464_Addition_of_Data_Structure_Sentinel__basic_34_unionType;
void FUN0()
{
    char data;
    CWE464_Addition_of_Data_Structure_Sentinel__basic_34_unionType myUnion;
    data = ' ';
    {
        char charArraySource[2];
        charArraySource[0] = (char)getc(stdin);
        charArraySource[1] = '\0';
        data = (char)atoi(charArraySource);
    }
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
            char charArraySink[4];
            charArraySink[0] = 'x';
<START>
            charArraySink[1] = data;
<END>
            charArraySink[2] = 'z';
            charArraySink[3] = '\0';
            printLine(charArraySink);
        }
    }
}
