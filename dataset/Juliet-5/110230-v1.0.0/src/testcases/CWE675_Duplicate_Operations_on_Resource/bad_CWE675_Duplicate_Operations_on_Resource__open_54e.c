void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN1(int data);
void FUN3(int data)
{
    FUN1(data);
}
void FUN4(int data);
void FUN5()
{
    int data;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    FUN4(data);
}
void FUN3(int data);
void FUN4(int data)
{
    FUN3(data);
}
void FUN0(int data)
{
<START>
    CLOSE(data);
<END>
}
