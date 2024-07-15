typedef union
{
    void * unionFirst;
    void * unionSecond;
} CWE843_Type_Confusion__char_34_unionType;
void FUN0()
{
    void * data;
    CWE843_Type_Confusion__char_34_unionType myUnion;
    data = NULL;
    {
        char charBuffer = 'a';
        data = &charBuffer;
    }
    myUnion.unionFirst = data;
    {
        void * data = myUnion.unionSecond;
<START>
        printIntLine(*((int*)data));
<END>
    }
}
