void FUN0()
{
    int data;
    data = -1; 
    data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    {
        int dataCopy = data;
        int data = dataCopy;
        CLOSE(data);
    }
}
void FUN1()
{
    int data;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    {
        int dataCopy = data;
        int data = dataCopy;
        ; 
    }
}
