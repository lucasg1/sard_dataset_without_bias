void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN3(int data)
{
    FUN2(data);
}
void FUN1(int data);
void FUN5(int data)
{
    FUN1(data);
}
void FUN3(int data);
void FUN7(int data)
{
    FUN3(data);
}
void FUN8(int data);
void FUN9()
{
    int data;
    data = -1; 
    data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    FUN8(data);
}
void FUN10(int data);
void FUN11()
{
    int data;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    FUN10(data);
}
void FUN5(int data);
void FUN8(int data)
{
    FUN5(data);
}
void FUN7(int data);
void FUN10(int data)
{
    FUN7(data);
}
void FUN0(int data)
{
    CLOSE(data);
}
void FUN2(int data)
{
    ; 
}
