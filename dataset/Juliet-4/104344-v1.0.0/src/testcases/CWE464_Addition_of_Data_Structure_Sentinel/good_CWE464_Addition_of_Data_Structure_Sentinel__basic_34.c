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
    data = 'a';
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
            char charArraySink[4];
            charArraySink[0] = 'x';
            charArraySink[1] = data;
            charArraySink[2] = 'z';
            charArraySink[3] = '\0';
            printLine(charArraySink);
        }
    }
}
