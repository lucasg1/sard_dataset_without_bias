void FUN0(int * data);
void FUN1()
{
    int data;
    data = -1; 
    data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    FUN0(&data);
}
void FUN2(int * data);
void FUN3()
{
    int data;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    FUN2(&data);
}
void FUN0(int * dataPtr)
{
    int data = *dataPtr;
    CLOSE(data);
}
void FUN2(int * dataPtr)
{
    int data = *dataPtr;
    ; 
}
