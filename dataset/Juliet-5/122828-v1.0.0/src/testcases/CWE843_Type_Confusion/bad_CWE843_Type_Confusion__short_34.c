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
        short shortBuffer = 8;
        data = &shortBuffer;
    }
    myUnion.unionFirst = data;
    {
        void * data = myUnion.unionSecond;
<START>
        printIntLine(*((int*)data));
<END>
    }
}
