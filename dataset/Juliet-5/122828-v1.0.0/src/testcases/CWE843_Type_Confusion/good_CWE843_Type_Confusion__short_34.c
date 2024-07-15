typedef union
{
    void * unionFirst;
    void * unionSecond;
} CWE843_Type_Confusion__short_34_unionType;
void FUN0()
{
    void * data;
    CWE843_Type_Confusion__short_34_unionType myUnion;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    myUnion.unionFirst = data;
    {
        void * data = myUnion.unionSecond;
        printIntLine(*((int*)data));
    }
}
