namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1; 
    data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    {
        int data = dataRef;
        CLOSE(data);
    }
}
void FUN1()
{
    int data;
    int &dataRef = data;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    {
        int data = dataRef;
        ; 
    }
}
} 
