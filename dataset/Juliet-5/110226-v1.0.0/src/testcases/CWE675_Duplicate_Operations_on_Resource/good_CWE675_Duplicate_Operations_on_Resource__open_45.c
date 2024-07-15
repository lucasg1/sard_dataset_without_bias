static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR1;
    CLOSE(data);
}
void FUN1()
{
    int data;
    data = -1; 
    data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    int data = VAR2;
    ; 
}
void FUN3()
{
    int data;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    VAR2 = data;
    FUN2();
}
