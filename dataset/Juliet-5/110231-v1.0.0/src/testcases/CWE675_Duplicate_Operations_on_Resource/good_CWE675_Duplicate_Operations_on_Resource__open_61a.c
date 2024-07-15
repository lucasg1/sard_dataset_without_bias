int FUN0(int data)
{
    data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    return data;
}
int FUN1(int data)
{
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    return data;
}
int FUN0(int data);
void FUN3()
{
    int data;
    data = -1; 
    data = FUN0(data);
    CLOSE(data);
}
int FUN1(int data);
void FUN5()
{
    int data;
    data = -1; 
    data = FUN1(data);
    ; 
}
