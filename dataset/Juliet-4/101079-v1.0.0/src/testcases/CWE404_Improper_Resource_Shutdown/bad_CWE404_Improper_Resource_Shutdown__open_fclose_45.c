static int VAR0;
static int VAR1;
void FUN0()
{
    int data = VAR0;
    if (data != -1)
    {
<START>
        fclose((FILE *)data);
<END>
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    VAR0 = data;
    FUN0();
}
