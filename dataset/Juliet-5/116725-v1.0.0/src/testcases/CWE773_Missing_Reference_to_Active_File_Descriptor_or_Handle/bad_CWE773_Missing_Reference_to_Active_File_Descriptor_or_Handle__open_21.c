static int VAR0 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
<START>
        data = OPEN("BadSink_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
<END>
        if (data != -1)
        {
            CLOSE(data);
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    VAR0 = 1; 
    FUN0(data);
}
