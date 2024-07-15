void FUN0(int data);
void FUN1()
{
    int data;
    data = -1; 
    data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    FUN2(data);
}
void FUN5(int data);
void FUN0(int data)
{
    FUN5(data);
}
void FUN7(int data);
void FUN2(int data)
{
    FUN7(data);
}
void FUN9(int data);
void FUN5(int data)
{
    FUN9(data);
}
void FUN11(int data);
void FUN7(int data)
{
    FUN11(data);
}
void FUN9(int data)
{
    CLOSE(data);
}
void FUN11(int data)
{
    ; 
}
