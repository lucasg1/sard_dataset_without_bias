static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR0;
<START>
    CLOSE(data);
<END>
}
void FUN1()
{
    int data;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    VAR0 = data;
    FUN0();
}
