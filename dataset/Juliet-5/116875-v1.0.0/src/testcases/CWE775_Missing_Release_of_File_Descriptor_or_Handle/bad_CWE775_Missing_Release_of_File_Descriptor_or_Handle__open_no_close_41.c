void FUN0(int data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    FUN0(data);
}
