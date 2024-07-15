typedef union
{
    int unionFirst;
    int unionSecond;
} CWE675_Duplicate_Operations_on_Resource__open_34_unionType;
void FUN0()
{
    int data;
    CWE675_Duplicate_Operations_on_Resource__open_34_unionType myUnion;
    data = -1; 
    data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        CLOSE(data);
    }
}
void FUN1()
{
    int data;
    CWE675_Duplicate_Operations_on_Resource__open_34_unionType myUnion;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        ; 
    }
}
