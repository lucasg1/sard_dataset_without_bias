namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
}
void FUN1()
{
    int data;
    data = -1; 
    FUN0(data);
    CLOSE(data);
}
void FUN2(int &data)
{
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
}
void FUN3()
{
    int data;
    data = -1; 
    FUN2(data);
    ; 
}
} 
