int VAR0 = 0;
void FUN0(int data);
void FUN1()
{
    int data;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(int data)
{
    if(VAR0)
    {
<START>
        CLOSE(data);
<END>
    }
}
